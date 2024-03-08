#include "Game.h"
#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"
#include <iostream>

void game::set_game_number(int game_number) {
	this->game_number = game_number;
}

int game::get_name_number() {
	return this->game_number;
}

bool game::check_points(vector <player*> vec_player) {
	for (int i = 0; i < vec_player.size(); i++) {
		if (vec_player.at(i)->get_points() >= this->game_number) {
			return true;
		}
	}
	return false;

}

vector <string> game::winner_selection(vector <player*> vec_player) {
	vector <string> winner;
	for (int i = 0; i < vec_player.size(); i++) {
		if (vec_player.at(i)->get_points() == this->game_number) {
			winner.push_back(vec_player.at(i)->get_name());
		}
	}
	return winner;
}

void game::play(vector <player*> vec_player){
	int sum = 0;
	while (!check_points(vec_player)) {
		sum = 0;
		for (int i = 0; i < vec_player.size(); i++) { //odabir kovanica
			//cout << "NOVA SUMA JE: " << sum << endl;
			vec_player.at(i)->choose();
			sum += vec_player.at(i)->get_sum();
		}
		for (int i = 0; i < vec_player.size(); i++) {  // pogadanje sume 
			//cout << "SUMA JE: " << sum << endl;
			int num = vec_player.at(i)->guess(vec_player.size());
			if (num == sum) {
				vec_player.at(i)->set_points(vec_player.at(i)->get_points() + 1);  // azuriranje broja bodova onoga tko je pogodio sumu
			}
			cout << vec_player.at(i)->get_name() << " : " << vec_player.at(i)->get_points() << endl;
		}		
	}
	vector<string> win = winner_selection(vec_player);
	for (int i = 0; i < win.size(); i++)
		std::cout << "Pobjednik je: " << win.at(i) << endl;
}


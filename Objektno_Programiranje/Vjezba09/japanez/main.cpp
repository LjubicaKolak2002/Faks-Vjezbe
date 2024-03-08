#include "Player.h"
#include "Game.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector <player*> vec_player;
	int player_num;
	string name;
	cout << "Unesite broj igraca " << endl;
	cin >> player_num;
	int kind_player;

	for (int i = 0; i < player_num; i++) {
		cout << "Unesite vrstu igraca" << endl <<  "1 = HumanPlayer" << endl << "2 = ComputerPlayer" << endl;
		cin >> kind_player;

		while (kind_player != 1 && kind_player != 2) {
			cout << "Mozete odabrati samo jednu od navedene dvije opcije. Ponovite unos!" << endl;
			cin >> kind_player;
		}
		
		if (kind_player == 1) {
			cout << "Unesite ime igraca" << endl;
			cin >> name;
			vec_player.push_back(new humanPlayer(name));
		}

		if (kind_player == 2) {
			vec_player.push_back(new computerPlayer("ComputerPlayer"));
		}
	}

	int number;
	cout << "Unesite broj bodova do kojeg se igra" << endl;
	cin >> number;

	game g;
	g.set_game_number(number);
	g.play(vec_player);





}
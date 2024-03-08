#include "ComputerPlayer.h"
#include <iostream>
#include <time.h>
using namespace std;

computerPlayer::computerPlayer() {
	this->points = 0;
}

computerPlayer::computerPlayer(string name) {
	this->name = name;
}

void computerPlayer::coin_selection() {

	int max = (1 + (int)(rand()) / ((int)(RAND_MAX / (3 - 1))));
	cout << "Broj odabranih kovanica za racunalo:" << max << endl;
	int coin;
	int sum = 0;

	for (int i = 0; i < max; i++) {  

		coin = (1 + (int)(rand()) / ((int)(RAND_MAX / (3 - 1))));
		cout << "Odabrane kovanice za racunalo: " << coin << endl;
		selected_coins.push_back(coin);
		sum += coin;
	}

	this->set_sum(sum);
	selected_coins.clear();

}

int computerPlayer::guess_sum(int player_num) {
	int max = player_num * 8;
	int sum = rand() % max + 1;
	cout << "Racunalo je unio sumu:" << sum << endl;
	return sum;
}
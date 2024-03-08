#include "HumanPlayer.h"
#include <iostream>
#include "Player.h"

humanPlayer::humanPlayer() {
	this->points = 0;
	this->sum = 0;
}

humanPlayer::humanPlayer(string name) {
	this->name = name;
}

void humanPlayer::coin_selection() {
	int num, selection;
	cout << "Unesite koliko kovanica zelite izvuci, od 0 do 3" << endl;
	cin >> num;
	while (num != 0 && num != 1 && num != 2 && num != 3) {
		cout << "Unos nije dobar! Ponovno unesite broj kovanica koje zelite izvuci (0-3)" << endl;
		cin >> num;
	}
	
	for (int i = 0; i < num; i++) {
		cout << "Odaberite kovanice: " << endl;
		cout << "1 = 1 kuna" << endl;
		cout << "2 = 2 kune" << endl;
		cout << "5 = 5 kuna" << endl;
		cin >> selection;

		while (selection != 1 && selection != 2 && selection != 5) {
			cout << "Mozete odabrati samo 3 kovanice, 1, 2 ili 5. Ponovite unos." << endl;
			cin >> selection;
		}

		if (selection == 1) {
			sum += 1;
			selected_coins.push_back(1);
		}

		else if (selection == 2) {
			sum += 2;
			selected_coins.push_back(2);
		}

		else if (selection == 5) {
			sum += 5;
			selected_coins.push_back(5);
		}
	}
	this->set_sum(sum);
	selected_coins.clear();
}

int humanPlayer::guess_sum(int player_num) {
	int sum;
	cout << "Unesite zbroj kovanica " << endl;
	cin >> sum;
	return sum;
}
#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"
#include <string>

class game {
protected:
	int game_number;

public:
	void set_game_number(int game_number);
	int get_name_number();
	vector <string> winner_selection(vector <player*> vec_player);
	bool check_points(vector <player*> vec_player);
	void play(vector <player*> vec_player);
	
	
};

#endif

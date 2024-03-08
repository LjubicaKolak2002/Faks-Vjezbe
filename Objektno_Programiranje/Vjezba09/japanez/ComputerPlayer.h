#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include <stdio.h>
#include "Player.h"

class computerPlayer : public player {
public:
	computerPlayer();
	computerPlayer(string name);
	void coin_selection();
	int guess_sum(int player_num);
	~computerPlayer() {};

};
#endif
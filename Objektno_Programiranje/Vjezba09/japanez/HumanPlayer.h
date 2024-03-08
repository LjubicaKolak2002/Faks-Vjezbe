#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"

class humanPlayer : public player {
public:
	humanPlayer();
	humanPlayer(string name);
	void coin_selection();
	int guess_sum(int player_num);
	~humanPlayer() {};
};
#endif

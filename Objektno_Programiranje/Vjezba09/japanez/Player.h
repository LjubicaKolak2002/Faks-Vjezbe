#ifndef PLAYER_H
#define PLAYER_H

using namespace std;
#include <vector>
#include <string>

class player {
protected:
	string name;
	int points;
	int sum;
	vector <int> selected_coins;
	vector <int> coins = { 1, 2, 5 };

public:
	player();
	void set_name(string name);
	string get_name();
	void set_points(int points);
	int get_points();
	void set_sum(int sum);
	int get_sum();
	virtual int guess_sum(int player_num) = 0;
	virtual void coin_selection() = 0;
	int guess(int player_num);
	void choose();
	virtual ~player() {};
};

#endif
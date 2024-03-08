#include "Player.h"
#include <iostream>
#include <string>

player::player() {
	this->points = 0;
	this->sum = 0;
}

void player::set_name(string name) {
	this->name = name;
}

string player::get_name() {
	return this->name;
}

void player::set_points(int points) {
	this->points = points;
	this->sum = 0;
}

int player::get_points() {
	return this->points;
}

void player::set_sum(int sum) {
	this->sum = sum;
}

int player::get_sum() {
	return this->sum;
}

int player::guess(int player_num) {
	return this->guess_sum(player_num);
}

void player::choose() {
	this->coin_selection();
}


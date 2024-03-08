#ifndef BOARD_H
#define BOARD_H
#include <iostream>
using namespace std;

struct Point {
	double x;
	double y;

	Point() {};
	Point(double w, double h) {
		x = w;
		y = h;
	}
};

class Board {
	char** array; 
	int row;
	int column;
	char b;

public:
	Board() {};
	Board(int c, int r);  
	Board(const Board& other);
	Board(Board&& other);
	char get_matrix(int i, int j); 
	void set_board();
	bool compare(double w, double h);
	void draw_char(Point p, char& ch);
	void draw_up_line(Point p, char ch);
	void draw_line(Point p1, Point p2, char ch);
	void display();
	~Board();
};

#endif

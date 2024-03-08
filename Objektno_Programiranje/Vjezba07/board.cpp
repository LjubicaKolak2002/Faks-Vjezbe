#include<iostream>
#include "board.h"
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

Board::Board(int c, int r) {
	this->column = c; 
	this->row = r; 
	this->array = new char* [row];
	this->b = 'o'; //znak za rub okvira

	for (int i = 0; i < row; i++) {

		array[i] = new char[column];
	}
	this->set_board();
}

Board::Board(const Board& other){

	this->row = other.row;
	this->column = other.column;
	this->array = new char* [row];
	this->b = other.b;

	for (int i = 0; i < row; i++) {

		this->array[i] = new char[column];
	}

	this->set_board();

}

Board::Board(Board&& other) {
	this->row = other.row;
	other.row = 0;

	this->column = other.column;
	other.column = 0;

	this->array = new char* [row];
	this->b = other.b;
	other.b = 0;

	for (int i = 0; i < row; i++) {

		this->array[i] = new char[column];
	}

	for (int i = 0; i < other.row; i++) {
		other.array[i] = nullptr;
	}
	this->set_board();
}

char Board::get_matrix(int i, int j) {
	return array[i][j];
}

void Board::set_board() {
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->column; j++) {
			if ((i == 0 || j == 0) || (i == row - 1 || j == column - 1)) {
				this->array[i][j] = this->b;
			}
			else
				this->array[i][j] = ' ';
		}
		cout << endl;
	}
}

bool Board::compare(double w, double h) {
	if (round(h) >= this->column || round(w) >= this->row || h == 0 || w == 0)
		return false;
	return true;
}

/*funkcija draw_char koja za tocku p i znak ch postavlja znak ch na odgovarajucem mjestu u matrici (x-koordinata odgovara
retku matrice, a y-koordinata stupcu). Ako koordinate tocke p nisu cjelobrojne, zaokruzite ih na najblizu cjelobrojnu vrijednost.*/
void Board::draw_char(Point p, char& ch) {
	int x = round(p.x);
	int y = round(p.y);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (i == p.x && j == p.y)
				array[i][j] = ch;
		}
		cout << endl;
	}
}

/*funkcija draw_up_line koja pocevsi od tocke p postavlja znak ch na svim poljima koja predstavljaju okomitu liniju prema gore.*/
void Board::draw_up_line(Point p, char ch) {
	int x = round(p.x);
	for (int i = p.y; i > 0; i--) {
		array[i][x] = ch;
	}
}
/*funkcija draw_line koja za dvije tocke p1 i p2 postavlja znak ch na svim poljima koje predstavljaju liniju izmedu te dvije tocke.*/
void Board::draw_line(Point p1, Point p2, char ch) {
	int x1 = min(p1.x, p2.x);
	int x2 = max(p1.x, p2.x);
	int y1 = min(p1.y, p2.y);
	int y2 = max(p1.y, p2.y);

	for (int i = y1; i <= y2; i++) {
		for (int j = x1; j <= x2; j++) {
			if (y1 == y2) {
				array[y1][j] = ch;
			}
			else if (x1 == x2) {
				array[i][x1] = ch;
			}
			else {
				if (i == j) {
					array[i][j] = ch;
				}
			}
		}
	}

}
//funkcija koja iscrtava trenutno stanje Boarda 
void Board::display() {
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->column; j++) {
			cout << this->get_matrix(i, j);
		}
		cout << endl;
	}
}

Board::~Board() {
	for (int i = 0; i < row; i++) {
		delete array[i];
	}
	delete[] array;
}



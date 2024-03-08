#include"board.h"
#include<iostream>
using namespace std;

int main() {
	
	int row, column;
	double x1, y1;
	double x2, y2;
	Board* b; 
	char ch;



	cout << "Unesite broj stupaca za formiranje okvira: ";
	cin >> column;
	cout << "Unesite broj redaka za formiranje okvira: ";
	cin >> row;

	b = new Board(column, row);

	cout << "Unesite kordinate prve tocke: " << endl;
	cin >> x1;
	cin >> y1;

	cout << "Unesite koordinate druge tocke: " << endl;
	cin >> x2;
	cin >> y2;

	cout << "Unesite znak :" << endl;
	cin >> ch;

	if (b->compare(x1, y1) && b->compare(x2, y2)) {

		b->draw_char(Point(x1, y1), ch);
		b->draw_up_line(Point(x1, y1), ch);
		b->draw_line(Point(x1, y1), Point(x2, y2), ch);

		b->display();
	}
	else
		cout << "Niste unijeli dobre koordinate tocaka! " << endl;
	
	/*Point p1(2, 2), p2(8, 8), p3(2, 8), p4(16, 8);
	Board b(20, 10);
	b.draw_line(p1, p2, 'x');
	b.draw_line(p3, p4, 'x');
	b.display();

	Board a(b);
	a.draw_line(p1, p2, 'x');
	a.draw_line(p3, p4, 'x');
	a.display();

	Board c = std::move(b);
	c.draw_line(p1, p2, 'x');
	c.draw_line(p3, p4, 'x');
	c.display();*/
	

}
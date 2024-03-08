#include "header.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//1.zadatak
void Point::set_random(int a, int b) {

	x = a + (double)(rand()) / ((double)(RAND_MAX / (b - a)));
	y = a + (double)(rand()) / ((double)(RAND_MAX / (b - a)));
	z = a + (double)(rand()) / ((double)(RAND_MAX / (b - a)));

}

void Point::distance_2D(Point a, Point b) {

	double x = a.get_x() - b.get_x();
	double y = a.get_y() - b.get_y();

	double distance;
	distance = sqrt(pow(x, 2) + pow(y, 2));
	cout << "Udaljenost u 2D prostoru iznosi " << distance << endl;

}

void Point::distance_3D(Point a, Point b) {

	double x = a.get_x() - b.get_x();
	double y = a.get_y() - b.get_y();
	double z = a.get_z() - b.get_z();


	double distance;
	distance = sqrt(pow(x, 2) + (pow(y, 2) + pow(z, 2)));
	cout << "Udaljenost u 3D prostoru iznosi " << distance << endl;

}

//2.zadatak
void Weapon::shoot() {
	if (current_bullet > 0) {
		current_bullet--;
	}
	//cout << "Broj metaka nakon pucanja iznosi " << current_bullet << endl;
}

void Weapon::reload() {

	current_bullet = capacity;

	//cout << "Napunjena velicina spremnika ponovno iznosi " << current_bullet << endl;
}

//3.zadatak
void Target::set_state(bool n) {
	if (n)
	{ 
		state = true; 
	}
	else {
		state = false;
	}
}




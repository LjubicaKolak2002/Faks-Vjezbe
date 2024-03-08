#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

//1.zadatak - klasa tocke
class Point {
private:
	double x;
	double y;
	double z;

public:
	Point() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	};
	void set_random(int a, int b);
	double get_x() const { return this->x; };
	double get_y() const { return this->y; }; 
	double get_z() const { return this->z; };
	void set_x(double x) { this->x = x; };
	void set_y(double y) { this->y = y; };
	void set_z(double z) { this->z = z; };
	void distance_2D(Point a, Point b);
	void distance_3D(Point a, Point b);


};

//2.zadatak - klasa oruzja
class Weapon {
private:
	Point position;
	int capacity;
	int current_bullet;

public:
	void set_capacity(int capacity) { this->capacity = capacity; };
	void set_current_bullet(int current_bullet) {this->current_bullet = current_bullet; };
	int get_capacity() const { return capacity; };
	int get_current_bullet() const { return current_bullet; };
	Point& get_point() { return position; };
	void shoot();
	void reload();
};


//3.zadatak - klasa mete
class Target {
private:
	Point a; //donja
	Point b; //gornja

public:
	bool state = false;
	void set_state(bool n);
	bool get_state() const { return state; };
	Point& get_p_a() { return a; };
	Point& get_p_b() { return b; };
};

#endif


#include "formula.h"
#include <iostream>
#include<cmath>
using namespace std;

timer::timer(int h, int m, double s) {
	this->h = h;
	this->m = m;
	this->s = s;
}

timer timer::operator+=(timer& value) {
	this->h += value.h;
	this->m += value.m;
	this->s += value.s;
	return *this;

}

timer timer::operator-=(timer& value) {
	this->h -= value.h;
	this->m -= value.m;
	this->s -= value.s;
	return *this;
}

timer timer::operator+(timer& value) {

	timer sum(h + value.h, m + value.m, s + value.s);
	return sum;
}

timer timer::operator-(timer& value) {

	timer difference(h - value.h, m - value.m, s - value.s);
	return difference;
}

timer timer::operator/(timer& value) {

	if (value.h == 0 || value.m == 0 || value.s == 0)
		return 0;

	timer division(h / value.h, m / value.m, s / value.s);

	return division;
}

timer timer::operator/=(int size) {

	double sec = (this->h * 3600) + (this->m * 60) + this->s;
	sec = double(sec) / size;
	this->m = sec / 60;
	this->h = this->m / 60;
	
	this->s = fmod(sec, 60);

	calculate_min();
	calculate_sec();

	return *this;
}

void timer::calculate_min(){
	int countMin = 0;
	while (this->m >= 60) {
		this->m -= 60;
		countMin++;

	}
	//this->h += countMin;
}

void timer::calculate_sec() {
	int countSec = 0;
	while (this->s >= 60) {
		this->s -= 60;
		countSec++;
	}
	//this->m += countSec;
}

ostream& operator<<(ostream& os, const timer& timer) {

	return os << timer.h << ":" << timer.m << ":" << timer.s << "";
}

bool operator<(const timer& value, const timer& value2) {
	return ((value.h * 3600) + (value.m * 60) + value.s) < ((value2.h * 3600) + (value2.m * 60) + value2.s);
	
}

timer::operator double(){

	return  (this->h * 3600) + (this->m * 60) + ((double(this->s)));
}

void timer::operator()(timer& t) {
	t.s = this->s + t.s;
}
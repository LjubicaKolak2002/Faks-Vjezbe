#ifndef FORMULA_H
#define FORMULA_H
#include <iostream>
using namespace std;

class timer {
private:
	int h;
	int m;
	double s;

public:
	timer() { 
		h = 0;
		m = 0;
		s = 0;
	};
	timer(int sec) : s(sec) {}
	timer(int h, int m, double s);
	timer operator+=(timer& value);
	timer operator-=(timer& value);
	timer operator+(timer& value);
	timer operator-(timer& value);
	timer operator/=(int size);
	timer operator/(timer& value);
	friend  bool operator<(const timer& value, const timer& value2);
	void calculate_sec();
	void calculate_min();
	operator double();
	void operator()(timer& t) ;

	friend ostream& operator<<(ostream& os, const timer& timer);
};

#endif
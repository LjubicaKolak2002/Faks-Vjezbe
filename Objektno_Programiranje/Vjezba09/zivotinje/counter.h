#ifndef COUNTER_H
#define COUNTER_H
using namespace std;
#include <string>
#include "animal.h"

class counter {
public:
	string anim(string type);
	int sum_of_legs(animal* arr[],int n);
};

#endif


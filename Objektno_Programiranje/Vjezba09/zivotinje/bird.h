#ifndef BIRD_H
#define BIRD_H
using namespace std;
#include <string>
#include "animal.h"

class bird : public animal {
public:
	bird() {};
	int get_num_legs() = 0;
	string get_type() = 0;
	~bird() = 0;
};

#endif


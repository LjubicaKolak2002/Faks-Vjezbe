#ifndef COCKROACH_H
#define COCKROACH_H
using namespace std;
#include <string>
#include "insect.h"

class cockroach: public insect{
protected:
	int num_legs;
	string type;

public:
	cockroach();
	int get_num_legs();
	string get_type();
	~cockroach() {};
};

#endif

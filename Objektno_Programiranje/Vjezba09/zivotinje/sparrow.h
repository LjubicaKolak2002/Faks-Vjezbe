#ifndef SPARROW_H
#define SPARROW_H
using namespace std;
#include <string>
#include "bird.h"

class sparrow : public bird {
protected:
	int num_legs;
	string type;
public:
	sparrow();
	int get_num_legs();
	string get_type();
	~sparrow() {};
};

#endif

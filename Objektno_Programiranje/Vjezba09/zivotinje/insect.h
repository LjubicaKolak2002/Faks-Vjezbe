#ifndef INSECT_H
#define INSECT_H
using namespace std;
#include <string>
#include "animal.h"

class insect : public animal {
public:
	insect() {};
	int get_num_legs() = 0;
	string get_type() = 0;
	~insect() = 0;
};

#endif

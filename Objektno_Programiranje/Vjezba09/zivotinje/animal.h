#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
#include <string>

class animal {
public:
	animal() {};
	virtual int get_num_legs() = 0;
	virtual string get_type() = 0;
	virtual ~animal() = 0;
};

#endif

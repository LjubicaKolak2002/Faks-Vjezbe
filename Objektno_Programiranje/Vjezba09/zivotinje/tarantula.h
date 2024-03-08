#ifndef TARANTULA_H
#define TARANTULA_H
using namespace std;
#include <string>
#include "spider.h"

class tarantula : public spider {
protected:
	int num_legs;
	string type;
public:
	tarantula();
	int get_num_legs();
	string get_type();
	~tarantula() {};
};

#endif

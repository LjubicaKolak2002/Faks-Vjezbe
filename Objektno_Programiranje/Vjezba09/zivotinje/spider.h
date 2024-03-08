#ifndef SPIDER_H
#define SPIDER_H
using namespace std;
#include <string>
#include "animal.h"

class spider : public animal {
public:
	spider() {};
	int get_num_legs() = 0;
	string get_type() = 0;
	~spider() = 0;
};

#endif

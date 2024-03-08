#include <iostream>
using namespace std;
#include "spider.h"
#include "tarantula.h"

tarantula::tarantula() {
	num_legs = 8;
	type = "Pauk - Tarantula";
}

int tarantula::get_num_legs() {
	return num_legs;
}

string tarantula::get_type() {
	return type;
}

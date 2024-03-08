#include <iostream>
using namespace std;
#include "bird.h"
#include "sparrow.h"

sparrow::sparrow() {
	num_legs = 2;
	type = "Ptica - Vrabac";
}

int sparrow::get_num_legs() {
	return num_legs;
}

string sparrow::get_type() {
	return type;
}

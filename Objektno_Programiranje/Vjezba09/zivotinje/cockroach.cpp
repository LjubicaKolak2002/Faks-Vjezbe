#include "cockroach.h"

cockroach::cockroach() {
	num_legs = 6;
	type = "Kukac - Zohar";
}

int cockroach::get_num_legs() {
	return num_legs;
}

string cockroach::get_type() {
	return type;
}

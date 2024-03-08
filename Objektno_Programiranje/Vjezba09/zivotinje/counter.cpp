#include <iostream>
using namespace std;
#include <string>
#include "counter.h"

string counter::anim(string type) {

	cout << "Dodan: " << type << endl;
	return type;
}

int counter::sum_of_legs(animal* arr[], int n) {

	int cnt = 0;

	for (int i = 0; i < n; i++) {

		cnt += (arr[i]->get_num_legs());
		anim(arr[i]->get_type());

	}
	return cnt;
}

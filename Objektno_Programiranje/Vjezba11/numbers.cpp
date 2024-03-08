#include <iostream>
#include<algorithm>
#include <fstream>
#include<vector>
#include "numbers.h"

using namespace std;

bool count_num(int num) {

	return num > 500;
}

bool find_less(int num) {

	return num < 300;
}

bool compare(int a, int b) {
	return a > b;
}

void read_file() {

	ifstream file("numbers.txt");

	if (!file) {
		throw check_file();
	}

	vector <int> vec;

	istream_iterator<int> is(file), eos;
	copy(is, eos, back_inserter(vec));

	cout << "Ukupan broj brojeva vecih od 500: " << count_if(vec.begin(), vec.end(), count_num) << endl;
	
	cout << "Minimalni element je: " << *min_element(vec.begin(), vec.end()) << endl; 

	cout << "Maximalni element je: " << *max_element(vec.begin(), vec.end()) << endl;

	vec.erase(remove_if(vec.begin(), vec.end(), find_less), vec.end());

	sort(vec.begin(), vec.end(), compare);

	ostream_iterator<int> os(cout, ",");
	copy(vec.begin(), vec.end(), os);

}


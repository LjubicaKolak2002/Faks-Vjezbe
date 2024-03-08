#include "Header.h"
#include <iostream>
using namespace std;

int main() {

	//1.zadatak
	/*string str;
	cout << "Unesite string " << endl;
	getline(cin, str);

	string sp = delete_space(str);
	cout << sp << endl;*/


	//2.zadatak
	string s;
	vector<string> v; 
	int n, r;
	cout << "Unesite broj recenica koje zelite upisati " << endl;
	cin >> n;

	for (int i = 0; i <= n; i++) {
		cout << "Unesite recenice " << endl;
		getline(cin, s);
		v.push_back(s);
	}
	r = rand() % v.size();
	string sp = pig_latin(v.at(r));
	cout << sp << endl;


	//3.zadatak
	/*vector <int> v, vp;
	int element;
	cout << "Unesite binarne znamenke " << endl;
	cin >> element;
	while (element == 0 || element == 1) {
		v.push_back(element);
		cout << "Unesite binarne znamenke " << endl;
		cin >> element;
	}
	vp = stuffing_bit(v);
	for (vector <int>::iterator itp = vp.begin(); itp != vp.end(); itp++) {
		cout << *itp;

	}
	*/

	//4.zadatak
	/*vector <int> v, vu;
	int element;
	cout << "Unesite binarne znamenke " << endl;
	cin >> element;
	while (element == 0 || element == 1) {
		v.push_back(element);
		cout << "Unesite binarne znamenke " << endl;
		cin >> element;
	}
	vu = unstuffing_bit(v);
	for (vector <int>::iterator itv = vu.begin(); itv != vu.end(); itv++) {
		cout << *itv;
	}*/

	//5.zadatak
	//vector <int> v = generate_vector();
	//game(v);


	return 0;



}
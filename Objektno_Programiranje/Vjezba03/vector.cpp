#include "vector.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
using std::vector;

//1.zadatak
void input_vector(vector <int>& v, int size_vec)
{
	for (int i = 0; i < size_vec; i++)
	{
		int element;
		cout << "Unesite elemente vektora " << endl;
		cin >> element;
		v.push_back(element);
	}
}

void  input_vector2(vector <int>& v, int a, int b) {

	for (int i = a; i < b; i++) {
		int element;
		cout << "Unesite element vektora " << endl;
		cin >> element;
		if(element > a && element < b)
		{
			v.push_back(element);
		}
		else {
			break;
		}

	}

	
}

void print_vector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}


//3.zadatak
void sort_vector(vector <int>& v) {

	sort(v.begin(), v.end());

	v.insert(v.begin(), 0);

	int sum = 0;
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
		
		sum += *it;
	}

	v.insert(v.end(), sum); 

}

//4.zadatak
void remove_element(vector <int>& v, int position){

	vector <int>::iterator it = v.begin() + position - 1;

	if (position != v.size())
	{
		v.erase(it);
		v.insert(v.begin() + position - 1, v.back());
		v.pop_back();
	}
	else {
		v.erase(it);
	}
}
	



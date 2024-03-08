#include "string.hpp"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
using std::string;

//5.zadatak
void count_substrings(string& s, string substring)
{
	int counter = 0;
	int position = s.find(substring, 0); 

	while (position != string::npos) 
	{
		counter++;
		position = s.find(substring, position + 1);

	}
	cout << "Broj pojavljivanja unesenog podstringa je " << counter << endl;

}

//6.zadatak
void string_vector(vector <string>&v)
{
	for (vector <string>::iterator it = v.begin(); it != v.end(); it++) //preokretanje
	{
		reverse((*it).begin(), (*it).end());
	}

	sort(v.begin(), v.end()); //sortiranje

}
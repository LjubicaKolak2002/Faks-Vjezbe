#include "vector.hpp"
#include "string.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using std::vector;
using std::string;

int main()
{
	
	//1.zadatak
	int size_vec;
	cout << "Unesite broj elemenata vektora " << endl;
	cin >> size_vec;
    /*vector<int> vec;
	input_vector(vec, size_vec);
	print_vector(vec);*/
	
	/*vector <int> vec;
	cout << "Unesite raspon u kojem zelite unijeti vektor " << endl;
	int a, b;
	cin >> a >> b;
	input_vector2(vec, a, b);
	print_vector(vec);*/

	/*
	//2.zadatak
	vector<int> v1;
	int size_vec1;
	cout << "Unesite broj elemenata vektora " << endl;
	cin >> size_vec1;
	input_vector(v1, size_vec1);
	cout << " " << endl;

	vector<int> v2;
	int size_vec2;
	cout << "Unesite broj elemenata vektora " << endl;
	cin >> size_vec2;
	input_vector(v2, size_vec2);
	cout << " " << endl;

	vector <int> v3;

	for (int i = 0; i < v1.size(); i++)
	{
		int counter = 0;
		for (int j = 0; j < v2.size(); j++)
		{
			if (v1[i] == v2[j])
			{
				counter++;
			}
		}
		if (counter == 0)
		{
			v3.push_back(v1[i]);
		}
	}
	cout << "Novi vektor je " << endl;
	print_vector(v3);
	*/

	//3.zadatak
	vector <int> v;
	input_vector(v, size_vec);
	sort_vector(v);
	print_vector(v);


	//4.zadatak
	/*vector <int> v;
	input_vector(v, size_vec);
	int position;
	cout << "Unesite poziciju elementa kojeg zelite ukloniti " << endl;
	cin >> position;

	remove_element(v, position);
	print_vector(v);*/


	//5.zadatak
	/*string s;
	cout << "Unesite string " << endl;
	getline(cin, s);

	string substring;
	cout << "Unesite podstring " << endl;
	getline(cin, substring);

	count_substrings(s, substring);*/

	//6.zadatak
	
	/*vector <string> v;
	string s;

	cout << "Unesite string " << endl;

	while (cin >> s)
	{
		v.push_back(s);
	}
	string_vector(v);

	for (vector <string>::iterator it = v.begin(); it != v.end(); it++) //ispis
	{
		cout << *it << endl;
	}*/
	


	


}
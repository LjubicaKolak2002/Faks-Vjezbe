#include "Header.h"
#include <algorithm>
#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

//1.zadatak
string delete_space(string& str) {

	for (int i = 0; i < str.length(); i++) {   
		if (isspace(str[i]) && ispunct(str[i + 1])) {
			for (int j = i; isspace(str[j]); j--) {
				str.erase(j, 1);
			}
		}
	}

	for (int i = 0; i < str.length(); i++) {
		if (ispunct(str[i]) && !isspace(str[i + 1])) {
			str.insert(i + 1, " ");
		}
	}
	return str;

}

//2.zadatak
bool first_letter(char f)
{
	return (f == 'a' || f == 'e' || f == 'i' || f == 'o' || f == 'u');
}

string make_word(string word) {

	if (first_letter(tolower(word[0]))) { 
		ispunct(word[word.length() - 1]) ? word.insert(word.length() - 1, "hay" + word[word.length()]) : word += "hay"; //interpunkcija
		return word;
	}
	for (int i = 0; i < word.length();) { 
		if (first_letter(tolower(word[i]))) {
			ispunct(word[word.length() - 1]) ? word.insert(word.length() - 1, "ay" + word[word.length()]) : word += "ay"; //interpunkcija
			return word;
		}
		else {
			word += tolower(word[i]);
			word.erase(i, 1);
		}
	}
	ispunct(word[word.length() - 1]) ? word.insert(word.length() - 1, "ay" + word[word.length()]) : word += "ay"; //interpunkcija
	return word;
}

string pig_latin(string sentence) {
	vector <string> v;
	stringstream s(sentence);
	string word;
	string new_sentence = "";

	while (s >> word) {
		v.push_back(word);
	}

	vector <string>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		new_sentence.append(make_word(*it));
		new_sentence += " ";
	}
	return new_sentence;

}
//3.zadatak
vector <int> stuffing_bit(vector <int>& v) {

	int counter = 0;
	for (vector <int>::iterator it = v.begin(); it != v.end(); it++) {
		if (counter == 5) {
			it = v.insert(it, 0);
			it++;
			counter = 0;
		}

		if (*it == 1) {
			counter++;
		}
		else {
			counter = 0;
		}


	}
	return v;
}

//4.zadatak
vector <int> unstuffing_bit(vector <int>& v) {

	int counter = 0;
	for (vector <int>::iterator it = v.begin(); it != v.end(); it++) {

		if ((counter == 5) && (*it == 0)) {
			it = v.erase(it);
			it++;
			counter = 0;
		}
		if (*it == 1) {
			counter++;
		}
		else {
			counter = 0;
		}

	}
	return v;
}

//5.zadatak

vector <int> generate_vector()
{
	vector <int> v;
	for (int i = 1; i <= 21; i++) {
		v.push_back(i);
	}
	return v;
}


int computer_selection() {
	return (1 + (int)(rand()) / ((int)(RAND_MAX / (4 - 1))));
}

void delete_element(vector<int>& v, int n) {
	for (int i = 0; i < n; i++) {
		v.pop_back();
	}
}

int player_selection() {
	int player;
	cout << "Unesite koliko sibica zelite izvuci " << endl;
	cin >> player;
	while (player > 3) {
		cout << "Mozete izvuci najvise 3 sibice odjednom! Unesite ponovno koliko puta zelite izvlaciti sibice. " << endl;
		cin >> player;
	}
	return player;
}

bool check_result(int number, int vector_size) {
	if (number >= vector_size) {
		return true;
	}
	return false;
}

void game(vector <int>& v) {
	vector <int>::iterator itw = v.begin();
	int computer = 0, player = 0;

	while (itw != v.end()) {
		
		//Racunalo
		computer = computer_selection();
		cout << "Broj sibica koje uklanja racunalo " << computer << endl;

		if (check_result(computer, v.size())) {
			cout << "Pobjedio je igrac!";
			break;
		}

		delete_element(v, computer);

		cout << "Broj preostalih sibica je " << v.size() << endl;

		//Korisnik
		cout << "Igrac: " << endl;
		player = player_selection();
		if (check_result(player, v.size())) {
			cout << "Pobjedilo je racunalo!";
			break;
		}

		delete_element(v, player);
		cout << "Broj preostalih sibica je " << v.size() << endl;
		(*itw)++;
	}
}



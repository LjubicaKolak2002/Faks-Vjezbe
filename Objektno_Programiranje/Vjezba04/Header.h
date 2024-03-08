#ifndef HEADER_H
#define HEADER_H
#include <string>
#include <vector>
using std::vector;
using std::string;

//1.zadatak
string delete_space(string& str);

//2.zadatak
bool first_letter(char f);
string make_word(string word);
string pig_latin(string sentence);

//3.zadatak
vector <int> stuffing_bit(vector <int>& v);

//4.zadatak
vector <int> unstuffing_bit(vector <int>& v);

//5.zadatak
vector <int> generate_vector();
int computer_selection();
int player_selection();
void delete_element(vector<int>& v, int n);
bool check_result(int number, int vector_size);
void game(vector <int>& v);

#endif


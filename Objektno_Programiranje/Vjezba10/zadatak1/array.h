#ifndef ARRAY_H
#define ARRAY_H

/*Napisite template funkciju za sortiranje niza. Napisite specijalizaciju te
funkcije za niz char-ova u kojoj nece biti razlike izmedu malih i velikih slova.*/
#include <iostream>

using namespace std;

template <typename T>
bool compare(T a, T b) {
	return a < b;
}


template <>
bool compare(char c1, char c2) {

	char new_c1 = tolower(c1);
	char new_c2 = tolower(c2);
	int result = strcmp(&new_c1, &new_c2);
	return result < 1;
}


template <typename T>
void swap_n(T& a, T& b) {

	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
void sort(T* arr, int n) {

	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (compare(arr[j], arr[min])) {
				min = j;
			}
		}
		swap_n(arr[i], arr[min]);
	}
}

template <typename T>
void print(T* arr, int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

#endif

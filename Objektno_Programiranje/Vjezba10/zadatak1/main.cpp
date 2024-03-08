#include "array.h"
#include <iostream>
using namespace std;

int main() {
	int arr_int[] = { 6, 12, 6, 24, -5, 1 };
	int n = sizeof(arr_int) / sizeof(arr_int[0]);
	sort(arr_int, n);
	print(arr_int, n);

	cout << endl;

	double arr_double[] = { 6.3, 2.9, 11.2, -3.1, 5.3, 1.5 };
	int n2 = sizeof(arr_double) / sizeof(arr_double[0]);
	sort(arr_double, n2);
	print(arr_double, n2);

	cout << endl;


	char arr_ch[] = { 'S','p','E','c','i','j','A','L','i','z','a','c','I','j','a' };
	int n3 = sizeof(arr_ch) / sizeof(arr_ch[0]);
	sort(arr_ch, n3);
	print(arr_ch, n3);
}

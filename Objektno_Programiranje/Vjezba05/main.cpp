#include <iostream>
#include "header.h"
#include <time.h>
#include <iomanip>
using namespace std;
int main() {

	//1.zadatak
	/*Point p;
	//provjera funkcije za postavljanje random vrijednosti
	p.set_random(10, 27);
	cout << "x: " << p.get_x() << endl;
	cout << "y: " << p.get_y() << endl;
	cout << "z: " << p.get_z() << endl;

	Point p1;
	p1.set_x(1);
	p1.set_y(1);
	p1.set_z(1);
	Point p2;
	p2.set_x(5);
	p2.set_y(5);
	p2.set_z(5);

	p1.distance_2D(p1, p2);
	p2.distance_3D(p1, p2);*/

	//2.zadatak
	/*Weapon w;
	w.set_capacity(15);
	w.set_current_bullet(12);

	cout << "Velicina spremnika je " << w.get_capacity() << endl;
	cout << "Trenutni broj metaka je " << w.get_current_bullet() << endl;

	w.shoot();
	w.reload();*/

	//4.zadatak
	Weapon w;
	int capacity;
	cout << "Unesite broj metaka koji stanu u jedno punjenje " << endl;
	cin >> capacity;

	while (capacity < 0) {
		cout << "Unesite ponovno broj metaka koji stanu u jedno punjenje" << endl;
		cin >> capacity;
	}

	w.set_capacity(capacity);

	//generiranje pucaca
	int a, b;   
	cout << "Unesite granice intervala za generiranje tocke oruzja" << endl;
	cin >> a >> b;
	w.get_point().set_random(a, b);

	//ispis pucaca
	cout << "x: " << w.get_point().get_x() << endl;
	cout << "y: " << w.get_point().get_y() << endl;
	cout << "z: " << w.get_point().get_z() << endl;


	int n;
	cout << "Unesite broj meta " << endl;
	cin >> n;
	Target* arr = new Target[n];
	int a2, b2;
	cout << "Unesite granice intervala za generiranje tocaka mete" << endl;
	cin >> a2 >> b2;

	//generiranje n meta
	for (int i = 0; i < n; i++) {
		arr[i].get_p_a().set_random(a2, b2);
		arr[i].get_p_b().set_random(a2, b2);

	}

	//ispis n meta
	for (int j = 0; j < n; j++)
	{
		cout << "x: " << arr[j].get_p_a().get_x() << endl;
		cout << "y: " << arr[j].get_p_a().get_y() << endl;
		cout << "z: " << arr[j].get_p_a().get_z() << endl;

		cout << "x: " << arr[j].get_p_b().get_x() << endl;
		cout << "y: " << arr[j].get_p_b().get_y() << endl;
		cout << "z: " << arr[j].get_p_b().get_z() << endl;
	}

	w.reload();

	//izracun pogodenih meta
	int counter = 0;
	for (int i = 0; i < n; i++) {
		w.shoot();
		if ((w.get_point().get_z() >= arr[i].get_p_a().get_z()) && (w.get_point().get_z() <= arr[i].get_p_b().get_z())) {
			arr[i].set_state(1);
		}
		else {
			arr[i].set_state(0);
		}

	}
	for (int i = 0; i < n; i++) {
		if (arr[i].get_state()) {
			counter++;
		}
	}
	cout << "Ukupan broj pogodenih meta je: " << counter << endl;

	delete[] arr;
	return 0;

}

#include "Header.h"
#include <iostream>

int main()
{
	//1.zadatak
	/*int n, min, max;
	std::cout << "Unesite duljinu niza " << std::endl;
	std::cin >> n;
	std::cout << "Unesite elemente niza " << std::endl;
	int* niz = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> niz[i];
	}
	racuna(niz, n, max, min);
	std::cout << "Najmanji element je: " << min << " najveci element je: " << max;
	delete[]niz;*/

	//2.zadatak
	/*int n, pozicija;
	std::cout << "Unesite duljinu niza " << std::endl;
	std::cin >> n;
	std::cout << "Unesite elemente niza " << std::endl;
	int* niz = new int[n];
	for (int i = 0 ; i < n; i++)
	{
		std::cin >> niz[i];
	}
	std::cout << "Unesite poziciju elementa kojeg zelite uvecati " << std::endl;
	std::cin >> pozicija;
	vrati_referencu(niz, pozicija)++;
	std::cout << "Uvecani element sada iznosi " << niz[pozicija] << std::endl;
	delete[] niz;*/

	//3.zadatak
	/*kruznica kr;
	kr.radijus = 2;
	kr.s.x = 5;
	kr.s.y = 2;
	int n;
	std::cout << "Unesite broj pravokutnika: " << std::endl;
	std::cin >> n;
	pravokutnik* niz = new pravokutnik[n];
	for (int i = 0; i < n; i++)
	{
		std::cout << "Unesite sve tocke pravokutnika " << std::endl;
		std::cin >> niz[i].a.x >> niz[i].a.y >> niz[i].b.x >> niz[i].b.y;
	}
	
	int rezultat = broji_pravokutnike(niz, kr, n);
	std::cout << "Broj pravokutnika koji sijeku kruznicu je: " << rezultat << std::endl;
	delete[]niz;*/

	//4.zadatak
	MyVector mv;
	mv.vector_new();

	int m;
	std::cout << "Unesite element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa " << std::endl;
	while (std::cin >> m)
		mv.vector_push_back(m);


	std::cout << "first element: " << mv.vector_front() << std::endl;
	std::cout << "last element: " << mv.vector_back() << std::endl;
	mv.print_vector();

	std::cout << "removing last element: " << std::endl;
	mv.vector_pop_back();
	mv.print_vector();

	std::cout << "size: " << mv.vector_size() << std::endl;
	std::cout << "capacity: " << mv.capacity << std::endl;

	mv.vector_delete();
	
	return 0;




}
#include "Header.h"
#include <iostream>
#include <cstddef>

//1.zadatak
void racuna(int* niz, int n, int& max, int& min)
{
	min = niz[0];
	max = niz[0];
	for (int i = 0; i < n; i++)
	{
		if (niz[i] < min)
		{
			min = niz[i];
		}
		if (niz[i] > max)
		{
			max = niz[i];
		}
	}
 }

//2.zadatak
int& vrati_referencu(int* niz, int& i)
{
	return niz[i];
}

//3.zadatak

int broji_pravokutnike(pravokutnik*& niz, kruznica& kr, int n)
{
	int i, min1, min2, max1, max2, x_n, y_n, brojac = 0;
	for (i = 0; i < n; i++)
	{
		min1 = kr.s.x > niz[i].b.x ? niz[i].b.x : kr.s.x;
		max1 = min1 > niz[i].a.x ? min1 : niz[i].a.x;

		min2 = kr.s.y > niz[i].b.y ? niz[i].b.y : kr.s.y;
		max2 = min2 > niz[i].a.y ? min2 : niz[i].a.y;

		x_n = max1 - kr.s.x;
		y_n = max2 - kr.s.y;

		if (((x_n * x_n) + (y_n * y_n)) <= ((kr.radijus) * (kr.radijus)))
		{
			brojac++;
		}
		
	}
	return brojac;

}

//4.zadatak
void MyVector::vector_new(size_t sz)
{
	size = 0;
	std::cout << "Unesite kapacitet vektora " << std::endl;
	std::cin >> capacity;
	arr = new int[capacity];

}
void MyVector::vector_delete()
{
	delete[] arr;
	size = 0;
	capacity = 0;
}
void MyVector::vector_push_back(int n)
{
	if (capacity == size)
	{
		int* novi = new int[2 * capacity];
		for (int i = 0; i < size; i++)
		{
			novi[i] = arr[i]; 

		}
		delete[] arr;  
		capacity *= 2;
		arr = novi;  

	}
	arr[size] = n;
	size++;

}

void MyVector::vector_pop_back()
{
	/*
	int* temp = new int[capacity];
	size--;
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i]; 
	}
	arr = temp; */
	size--;
	int diference = capacity - size;
	if (capacity > size)
	{
		capacity = capacity - diference;
	}
	int* temp = new int[capacity];
	//size--;
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	arr = temp;

}
int& MyVector::vector_front()
{
	return arr[0]; 

}
int& MyVector::vector_back()
{
	return arr[size - 1]; 

}
size_t MyVector::vector_size()
{
	return size;
}


void MyVector::print_vector()
{
	for (size_t i = 0; i < vector_size(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}



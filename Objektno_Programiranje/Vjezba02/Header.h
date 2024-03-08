#ifndef HEADER_H
#define HEADER_H

//1.zadatak
void racuna(int* niz, int n, int& max, int& min);

//2.zadatak
int& vrati_referencu(int* niz, int& i);

//3.zadatak
struct tocka {
	double x, y;

};

struct kruznica {
	tocka s;
	double radijus;

};

struct pravokutnik {
	tocka a, b;

};

int broji_pravokutnike(pravokutnik*& niz, kruznica& kr, int n);

//4.zadatak
struct MyVector
{
    int* arr;
    size_t size, capacity;

    void vector_new(size_t sz = 0);
    void vector_delete();
    void vector_push_back(int n);
    void vector_pop_back();
    int& vector_front();
    int& vector_back(); 
    size_t vector_size();

    void print_vector();
};

#endif




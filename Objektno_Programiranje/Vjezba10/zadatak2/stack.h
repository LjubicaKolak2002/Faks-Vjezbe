#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template < typename T >
class stack {
private:
	int top;
	int size;
	T* arr;

public:
	stack(int size = 50);
	void push(T element);
	void pop();
	bool is_empty();
	void print();
	~stack() { delete[] arr; }
};
#endif


template <typename T>
stack<T>::stack(int size) {

	this->size = size;
	arr = new T[this->size];
	top = -1;
}

template <typename T>
void stack<T>::push(T element) {

	if (this->top == this->size - 1)
		cout << "Element se ne moze dodati." << endl;

	else {
		(this->top)++;
		arr[top] = element;
		cout << "Dodani element je: " << arr[top] << "" << endl;
	}
}

template <typename T>
bool stack<T>::is_empty() {

	if (this->top < 0) {
		return true;
	}

	else {
		return false;
	}
}

template <typename T>
void stack<T>::pop() {

	if (is_empty()) {
		cout << "Stack je prazan, nije moguce ukloniti element." << endl;
	}

	else {
		cout << "Uklonjeni element: " << arr[top] << endl;
		(this->top)--;
	}
}

template <typename T>
void stack<T>::print() {

	if (is_empty()) {
		cout << "Stack je prazan!" << endl;
	}

	else {
		for (int i = top; i >= 0; i--)
			cout << this->arr[i] << endl;
	}
}



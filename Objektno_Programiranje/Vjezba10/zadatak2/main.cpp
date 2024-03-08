#include "stack.h"
#include <iostream>
using namespace std;


int main() {

	/*stack <int> s;
	s.push(4);
	s.push(5);
	s.push(12);
	s.push(9);
	s.pop();
	s.print();
	s.push(11);
	s.push(3);
	s.pop();
	s.push(6);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.print();*/

	stack<double> s(2);
	s.push(7.9);
	s.push(3.2);
	s.pop();
	s.push(4.5);
	s.print();
	s.push(3.6);
	s.pop();
	s.pop();
	s.print();

}
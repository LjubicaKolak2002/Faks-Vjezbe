#include <iostream>
using namespace std;
#include "animal.h"
#include "insect.h"
#include "spider.h"
#include "bird.h"
#include "counter.h"
#include "cockroach.h"
#include "sparrow.h"
#include "tarantula.h"


int main()
{
	counter c;
	animal* arr[] = { new cockroach, new sparrow, new tarantula };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Ukupan broj nogu: " << c.sum_of_legs(arr, n) << endl;
}

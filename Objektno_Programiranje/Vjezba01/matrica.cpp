#include "matrica.h"
#include <iostream>
#include <iomanip>

matrica unos() {
	matrica mojaMatrica;
	std::cout << "Unesite broj redaka ";
	std::cin >> mojaMatrica.m;
	std::cout << "Unesite broj stupaca ";
	std::cin >> mojaMatrica.n;

	mojaMatrica.elementi = new float* [mojaMatrica.m];
	for (int i = 0; i < mojaMatrica.m; i++)
		mojaMatrica.elementi[i] = new float[mojaMatrica.n];

	for (int i = 0; i < mojaMatrica.m; i++) {
		for (int j = 0; j < mojaMatrica.n; j++) {
			std::cout << "Unesite element:" << std::endl;
			std::cin >> mojaMatrica.elementi[i][j];
		}
	}
	return mojaMatrica;

}

matrica generiraj(int a, int b)
{
	matrica generirana;

	std::cout << "Unesite broj redaka ";
	std::cin >> generirana.m;
	std::cout << "Unesite broj stupaca ";
	std::cin >> generirana.n;


	generirana.elementi = new float* [generirana.m];
	for (int i = 0; i < generirana.m; i++)
		generirana.elementi[i] = new float[generirana.n];

	for (int i = 0; i < generirana.m; i++)
	{
		for (int j = 0; j < generirana.n; j++) {
			generirana.elementi[i][j] = a + (float)(rand()) / ((float)(RAND_MAX / (b - a)));;

		}
	}
	return generirana;

}

matrica zbroji(matrica matrica1, matrica matrica2)
{
	matrica suma;
	suma.m = matrica1.m;
	suma.n = matrica1.n;

	suma.elementi = new float* [suma.m];
	for (int i = 0; i < suma.m; i++)
		suma.elementi[i] = new float[suma.n];

	if ((matrica1.m != matrica2.m) || (matrica1.n != matrica2.n))
	{
		return suma; //smece
	}

	for (int i = 0; i < matrica1.m; i++)
	{
		for (int j = 0; j < matrica1.n; j++)
		{
			suma.elementi[i][j] = matrica1.elementi[i][j] + matrica2.elementi[i][j];

		}
	}
	return suma;
}

matrica oduzmi(matrica matrica1, matrica matrica2)
{
	matrica razlika;
	razlika.m = matrica1.m;
	razlika.n = matrica1.n;

	razlika.elementi = new float* [razlika.m];
	for (int i = 0; i < razlika.m; i++)
		razlika.elementi[i] = new float[razlika.n];

	if ((matrica1.m != matrica2.m) || (matrica1.n != matrica2.n))
	{
		return razlika; //smece
	}

	for (int i = 0; i < matrica1.m; i++)
	{
		for (int j = 0; j < matrica1.n; j++)
		{
			razlika.elementi[i][j] = matrica1.elementi[i][j] - matrica2.elementi[i][j];
		}
	}
	return razlika;
}

matrica pomnozi(matrica matrica1, matrica matrica2)
{
	matrica umnozak;
	umnozak.m = matrica1.m;
	umnozak.n = matrica2.n;

	umnozak.elementi = new float* [umnozak.m];
	for (int i = 0; i < umnozak.m; i++)
		umnozak.elementi[i] = new float[umnozak.n];

	if (matrica1.n != matrica2.m) //uvjet ulancanosti
	{
		return umnozak;
	}
	for (int i = 0; i < matrica1.m; i++)
	{
		for (int j = 0; j < matrica2.n; j++)
		{
			umnozak.elementi[i][j] = 0;
			for (int k = 0; k < matrica1.n; k++)
			{
				umnozak.elementi[i][j] += matrica1.elementi[i][k] * matrica2.elementi[k][j];
			}
		}
	}
	return umnozak;

}

matrica transponiraj(matrica stara)
{
	matrica nova;
	nova.m = stara.n;
	nova.n = stara.m;

	nova.elementi = new float* [nova.m];
	for (int i = 0; i < nova.m; i++)
		nova.elementi[i] = new float[nova.n];

	for (int i = 0; i < stara.m; i++)
	{
		for (int j = 0; j < stara.n; j++)
		{
			nova.elementi[j][i] = stara.elementi[i][j];

		}
	}
	return nova;
}

void ispisi(matrica matrica1) {
	for (int i = 0; i < matrica1.m; i++)
	{
		for (int j = 0; j < matrica1.n; j++)
		{
			std::cout << std::fixed << std::right << std::setw(10) << std::setprecision(4) << matrica1.elementi[i][j]; " ";
		}
		std::cout << std::endl;
	}
}

void oslobodi(matrica mojaMatrica) {
	for (int i = 0; i < mojaMatrica.m; i++)
		delete[] mojaMatrica.elementi[i];
	delete[] mojaMatrica.elementi;
}
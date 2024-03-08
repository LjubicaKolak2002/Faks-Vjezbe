#include "matrica.h"
#include <iostream>
#include <ctime>

int main()
{
	srand((unsigned)time(NULL));

	matrica matrica1 = unos();
	matrica matrica2 = unos();

	//ispisi(matrica1);
	//oslobodi(matrica1);
	//oslobodi(matrica2);

	/*std::cout << "Unesite raspon u kojem zelite generirati matricu:" << std::endl;
	float a, b;
	std::cin >> a >> b;

	matrica gen = generiraj(a, b);
	ispisi(gen);
	oslobodi(gen);*/

	matrica zbrojena = zbroji(matrica1, matrica2);
	ispisi(zbrojena);
	oslobodi(zbrojena);

	/*matrica oduzeta = oduzmi(matrica1, matrica2);
	ispisi(oduzeta);
	oslobodi(oduzeta);*/


	/*matrica pomnozena = pomnozi(matrica1, matrica2);
	ispisi(pomnozena);
	oslobodi(pomnozena);*/

	/*matrica transponirana = transponiraj(matrica1);
	ispisi(transponirana);
	oslobodi(transponirana);*/

	return 0;

}
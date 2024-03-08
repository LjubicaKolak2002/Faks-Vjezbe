#ifndef MATRICA_H
#define MATRICA_H

struct matrica {
	int n, m;
	float** elementi;
};

matrica unos();
matrica generiraj(int a, int b);
matrica zbroji(matrica matrica1, matrica matrica2);
matrica oduzmi(matrica matrica1, matrica matrica2);
matrica pomnozi(matrica matrica1, matrica matrica2);
matrica transponiraj(matrica stara);
void ispisi(matrica matrica1);
void oslobodi(matrica mojaMatrica);

#endif

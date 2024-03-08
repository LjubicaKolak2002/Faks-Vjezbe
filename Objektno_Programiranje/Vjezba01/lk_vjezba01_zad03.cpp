/*. Napisati iterativnu funkciju za traženje najveceg i najmanjeg broja u nizu.*/
#include <iostream>
void trazi(int* niz, int n, int* max, int* min)
{
	*min = niz[0];
	*max = niz[0];
	for (int i = 0; i < n; i++)
	{
		if (niz[i] < *min)
		{
			*min = niz[i];
		}
		if (niz[i] > *max)
		{
			*max = niz[i];
		}
	}
}
int main3()
{
	int max, min;
	int niz[] = { 12, -5, 1, 6, -9, 0, 18, 21, 4 };
	int n = sizeof(niz) / sizeof(niz[0]);
	trazi(niz, n, &max, &min);
	std::cout << "Najveci broj u nizu je: " << max << ", a najmanji broj u nizu je: " << min;
	return 0;
}
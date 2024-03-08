/*Napisati rekurzivnu funkciju za traženje najveceg i najmanjeg broja u nizu*/
#include <iostream>
int trazi_rek(int* niz, int n, int* max, int* min)
{
	if (n < 0)
	{
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		if (niz[n] < *min)
		{
			*min = niz[n];
		}
		if (niz[n] > *max)
		{
			*max = niz[n];
		}
	}
	trazi_rek(niz, n - 1, max, min);

}
int main4()
{
	int niz[] = { 5, 12, 7, 32, 0, 1, -3, 4 };
	int n = sizeof(niz) / sizeof(niz[0]);
	int min = niz[n - 1];
	int max = niz[n - 1];
	trazi_rek(niz, n - 1, &max, &min);
	std::cout << "Najveci broj u nizu je: " << max << ",a najmanji broj u nizu je: " << min;
	return 0;
}
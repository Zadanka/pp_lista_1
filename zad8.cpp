#include <iostream>

using namespace std;

void skopiuj_do(int *tab, int rozmiar, int *docelowa)
{
	for (int i = 0; i < rozmiar; i++)
	{
		docelowa[i] = tab[i];
	}
}

int main()
{
	const int rozmiar = 10;

	int tab[rozmiar] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int docelowa[rozmiar];

	skopiuj_do(tab, rozmiar, docelowa);

	for (int i = 0; i < rozmiar; i++)
	{
		cout << docelowa[i] << " ";
	}

	return 0;
}

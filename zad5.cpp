#include <iostream>

using namespace std;

int *statystyki(int *tab, int rozmiar, int maksymalna)

{
	int *nowa_tab = new int[maksymalna];

	for (int i = 0; i < maksymalna; i++)
		for (int j = 0; j < rozmiar; j++)
			if (i==tab[j])
				nowa_tab[i]++;
	return nowa_tab;
}

int main()
{
    int tab[12] = {1, 3, 4, 5, 10, 12, 60, 34, 2, 3, 3, 5};

    int *nowa = statystyki(tab, 12, 64);

    for (int i = 0; i < 64; i++)
    {
        cout << nowa[i] << " ";
    }
	cout << endl;
    delete[] nowa;

    return 0;
}

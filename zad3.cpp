#include <iostream>

using namespace std;

double *dodaj_1(double *tab, int rozmiar)
{
    double *nowa_tab = new double[rozmiar];

    for (int i = 0; i < rozmiar; i++)
        nowa_tab[i] = tab[i] + 1;

    return nowa_tab;
}

int main()
{
    double tab[6] = {1, 3, 4, 5, 10, 12};

    double *nowa = dodaj_1(tab, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << nowa[i] << endl;
    }

    delete[] nowa;

    return 0;
}

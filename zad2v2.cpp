#include <iostream>
 
using namespace std;
 
double *kasuj_element(double *tab, int rozmiar, int ktory)
{
    double *nowa_tab = new double[rozmiar - 1];
 
    for (int i = 0; i < rozmiar; i++)
    {
        if (i == ktory)
            continue;
 
        if (i < ktory)
            nowa_tab[i] = tab[i];
 
        if (i > ktory)
            nowa_tab[i - 1] = tab[i];
    }
 
    return nowa_tab;
}
 
int main()
{
    double tab[6] = {1, 3, 4, 5, 10, 12};
 
    double *nowa = kasuj_element(tab, 6, 5);
 
    for (int i = 0; i < 5; i++)
    {
        cout << nowa[i] << endl;
    }
 
    return 0;
}

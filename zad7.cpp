#include <iostream>
 
using namespace std;
 
double *odwroc(double *tab, int rozmiar)
{
    double *nowa_tab = new double[rozmiar];
 
    for (int i = 0; i < rozmiar; i++)
    {
        nowa_tab[i] = tab[9-i];
    }
 
    return nowa_tab;
}
 
int main()
{
    double tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double *nowa = odwroc(tab, 10);
 
    for (int i = 0; i < 10; i++)
    {
        cout << nowa[i] << endl;
    }
    return 0;
}

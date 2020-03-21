#include <iostream>
 
using namespace std;
 
double *wytnij(double *tab, int rozmiar, int od, int az_do)
{
    double *nowa_tab = new double[rozmiar];
    for (int i = od; i <= az_do; i++)
    	{
       		nowa_tab[i] = tab[i];
    	}
    return nowa_tab;
}
 
int main()
{
	int od, az_do, x;
    double tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Tablica: ";
    for (int i=0; i<10; i++)
		{
			cout<<" "<<tab[i];
		}
	cout<<endl;
    cout<<"Podaj od ktorego indeksu wyciac elementy tablicy: ";
    cin>>od;
    cout<<"Podaj do ktorego indeksu wyciac elementy tablicy: ";
    cin>>az_do;
    double *nowa = wytnij(tab, 10, od, az_do);
    for (int i = od; i <= az_do; i++)
    	{
        	cout << nowa[i] << endl;
    	}
    return 0;
}

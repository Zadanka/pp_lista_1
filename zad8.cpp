#include <iostream>
 
using namespace std;
 
void skopiuj_do(int *tab, int rozmiar, int *docelowa)
{
    for (int i = 0; i < 10; i++)
    	{
       		docelowa[i] = tab[i];
    	}
}
 
int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int docelowa[10];
	skopiuj_do(tab, 10, docelowa);
	delete [] tab;
	delete [] docelowa;
    return 0;
}

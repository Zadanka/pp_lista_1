#include <iostream>

using namespace std;
int n,i, T[100];

void wyszukiwanie_binarne(int * T,int n)
{
    int jaka, wystapienie=0;
    cout << "Jaka liczbe chcesz wyszukac?"<<endl;
    cin >> jaka;
            for (i=0;i<n;i++)
            {
            if (T[i]==jaka)
            wystapienie=1;
            }
    if (wystapienie==0)
        cout << "Nie znaleziono!"<<endl;
    if (wystapienie==1)
        cout << "Znaleziono!"<<endl;


}

int main()
{
    cout << "Jaki ma byc rozmiar tablicy?"<<endl;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Podaj liczbe nr " << i+1 <<endl;
        cin >>T[i];
    }
    wyszukiwanie_binarne(T, n);

    return 0;
}

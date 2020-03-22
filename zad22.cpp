#include <iostream>

using namespace std;
int n,i;
float T[100];

void wyszukiwanie_binarne(float * T,int n)
{
    int jaka;
    bool wystapienie=false;
    cout << "Jaka liczbe chcesz wyszukac?"<<endl;
    cin >> jaka;
            for (i=0;i<n;i++)
            {
            if (T[i]==jaka)
            wystapienie=true;
            }
    if (wystapienie==false)
        cout << "Nie znaleziono!"<<endl;
    if (wystapienie==true)
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

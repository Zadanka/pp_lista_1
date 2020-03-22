#include <iostream>

using namespace std;

float a,b;
int wybor;

float suma(float a, float b)
{
        return a + b;
}

float roznica(float a, float b)
{
        return a - b;
}

float iloczyn(float a, float b)
{
        return a * b;
}

float iloraz(float a, float b)
{
        return a / b;
}



int main ()
{
    while(1)
    {
          cout<<"KALKULATOR"<<endl;
          cout<<"1. Dodawanie"<<endl;
          cout<<"2. Odejmowanie"<<endl;
          cout<<"3. Mnozenie"<<endl;
          cout<<"4. Dzielenie"<<endl;
          cout<<"5. Potegowanie"<<endl;
          cout<<"0. Wyjscie"<<endl;
          cin>>wybor;
          if (wybor==0) break;

          switch(wybor)
        {

          case 1:
          {
          cout << "Podaj liczbe A:"<<endl;
          cin >> a;
          cout << "Podaj liczbe B:"<<endl;
          cin >> b;
          cout << "Wynik:" <<endl<<suma(a,b)<<endl;

          break;
          }
          case 2:
          {
          cout << "Podaj liczbe A:"<<endl;
          cin >> a;
          cout << "Podaj liczbe B:"<<endl;
          cin >> b;
          cout << "Wynik:" <<endl<<roznica(a,b)<<endl;
          break;
          }
          case 3:
          {
          cout << "Podaj liczbe A:"<<endl;
          cin >> a;
          cout << "Podaj liczbe B:"<<endl;
          cin >> b;
          cout << "Wynik:" <<endl<<iloczyn(a,b)<<endl;

          break;
          }
          case 4:
          {
          cout << "Podaj liczbe A:"<<endl;
          cin >> a;
          cout << "Podaj liczbe B:"<<endl;
          cin >> b;
          cout << "Wynik:" <<endl<<iloraz(a,b)<<endl;
          break;
          }
          case 5:
          {
          cout << "Podaj liczbe A:"<<endl;
          cin >> a;
          cout << "Podaj liczbe B:"<<endl;
          cin >> b;
          cout << "Wynik:" <<endl<<suma(a,b);
          break;
          }
        }
    }
    cout << endl <<"Koniec"<<endl;
    return 0;
}

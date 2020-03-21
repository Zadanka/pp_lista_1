#include <iostream>
using namespace std;

float polowki(float *&tab, int n)
{
  int i,zera=0,nzera=0;
  for (i=0 ; i<n/2 ; i++)
    tab[i] = 0;
  for (i=n/2 ; i<n ; i++)
    tab[i] = i+1;
  for (i=0 ; i<n ; i++)
  {
    if (tab[i]==0)
    zera++;
    if (tab[i]!=0)
    nzera++;
  }
  return 1.0*nzera/zera;
}
int main()
{
int n;
float *t;

cout << "Podaj wielkosc tablicy" << endl;
cin >> n;
t = new float [n];

cout << "Stosunek liczb roznych od zera do liczb rownych zero wynosi " << polowki(t,n) << endl;
delete [] t;
  return 0;
}

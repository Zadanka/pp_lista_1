#include <iostream>
#include <ctime>
#include <string>
using namespace std;

double wartosc_wielomianu(float tab[], unsigned int n, float x) 
{
	if(n==0) 	
		return tab[0];
	return 1.0*x*wartosc_wielomianu(tab,n-1,x);
//(x z return) <- x * ((x(x(..(xt[0]+t[1])+t[2])..)+t[n])+t[n+1]) -> (wartosc_wilomianu(n-1))
}
char znak(float a)
{
	if (a>=0)
		return '+';
}
void wspolczynniki(float *&T, unsigned int n)
{
	T = new float [n];
	srand(time(NULL));
	for (unsigned int i = 0 ; i < n ; i++)
		T[i]=(rand()%2001-1000)/10.0;
} 
int main()
{
    unsigned int i,n;
    float x,*wsp;
    
	cout << "Oblicznie wartosci wielomianu\nKtórego stopnia ma być wielomian?" << endl;
	cin >> n;
	
	wspolczynniki(wsp,n+1);
	
	/*for (i = 0; i < n+1; i++)
	{
		cout << "Podaj " << i+1 << " wspolczynnik wielomianu" << endl;
		cin >> wsp[i];
	}*/
	
	cout << "Dla jakiej wartości obliczyć wielomian?"<<endl;
    cin >> x;

    cout << "Wielomain postaci " ;
	for (i = 0; i < n; i++)
		cout << wsp[i] << "x^" << n-i << " " << znak(wsp[i]);
	cout << wsp[n] << "x " << znak(wsp[n+1]) << wsp[n] << " dla x = " << x << "ma wartosc "  << wartosc_wielomianu(wsp, n, x) << endl;
	
	delete [] wsp;
    return 0;
}

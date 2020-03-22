#include <iostream>

using namespace std;

double x2(double x)
{
    return 3.14*x*x;
}

double x3(double x)
{
    return 10*x*x*x;
}

double suma(double x)
{	
	return x3(x) + x2(x);
}

double iloraz(double x)
{
    return x / 3;
}

double iloraz_dwa(double x)
{
    return 1 / (x*x);
}

double roznica(double x)
{
    return iloraz(x) - iloraz_dwa(x);
}

double iloczyn(double x)
{
    return suma(x) * roznica(x);
}

double oblicz(double x)
{
	return iloczyn(x);	
}

int main()
{
	double x=3.0;
	cout << "Wartosc wyrazenie wynosi: " << oblicz(x) << endl;
	return 0;
}




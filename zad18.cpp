#include <iostream>
#include <cmath>

using namespace std;

double poleH(double a, double b, double c)
{
	double p;
	p=0.5*(a+b+c);
	return sqrt(1.0*p*(p-a)*(p-b)*(p-c));
}

int main()
{
	double a,b,c;
	
	cout << "Podaj dlugosci bokow trojkata\nBok a = ";
	cin >> a;
	cout << "Bok b = ";
	cin >> b;
	cout << "Bok c = ";
	cin >> c;
	
	if ((a>=b+c)||(b>=a+c)||(c>=a+b))
		cout << "Z takich odcinkow nie zlozysz trojkata" << endl;
	else
	{
		cout << "Pole trojkata wynosi " << poleH(a,b,c) << endl;
	}
    return 0;
}

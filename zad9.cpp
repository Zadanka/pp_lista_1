#include <iostream>

using namespace std;

double roznica(double (*f)(double), double a, double b)
{
    double x,y;
	x = f(a);
	y = f(b);
	if (x>=y)
		return x-y;
	if (x<y)
		return y-x;
}

double przepisz(double w)
{
    return w;
}

int main()
{

    double a = 1.4,b = 2.5;
	cout << "wartosc bezwzgledna z roznicy " << a << " i " << b << " to " << roznica(przepisz,a,b) <<endl;

    return 0;
}

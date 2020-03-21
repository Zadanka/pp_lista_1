#include <iostream>

using namespace std;

double roznica(double(*wsk_f), double a, double b)
{
    // Jak ktoś wie o chuj tu chodzi to niech próbuje xD
}

double f(double w)
{
    return w;
}

int main()
{

    double (*wsk_f)(double w);
    wsk_f = &f;

    return 0;
}
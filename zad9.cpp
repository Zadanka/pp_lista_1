#include <iostream>

using namespace std;

double roznica(double(*wsk_f), double a, double b)
{
}

double f(double w)
{
    return w;
}

int main()
{

    double (*wsk_f)();
    wsk_f = &f;

    return 0;
}
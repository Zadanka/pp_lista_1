#include <iostream>

using namespace std;

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

float kwadrat(float a)
{
    return a * a;
}

float szescian(float a)
{
    return a * a * a;
}

float oblicz(float x)
{
    float m1 = suma(iloczyn(10, szescian(x)), iloczyn(3.14, kwadrat(x)));
    float m2 = roznica(iloraz(x, 3), iloraz(1, kwadrat(x)));

    return iloczyn(m1, m2);
}

int main()
{
    cout << oblicz(1.0) << endl;
    return 0;
}

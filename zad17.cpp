#include <iostream>

using namespace std;

float obwod_trojkata(float a, float b, float c)
{
	return a + b +c;
}

int main()
{
	float a = 9.0, b = 5.0, c = 3.0;
	cout << "Obwod trojkata wynosi: " << obwod_trojkata(a, b, c);
	return 0;
}

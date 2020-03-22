#include <iostream>

using namespace std;

float roznica(float a, float b)
{
        return a - b;
}

int main()
{
	float a = 10.0, b = 5.0;
        cout << "Roznica wynosi: " << roznica(a, b);
	return 0;
}

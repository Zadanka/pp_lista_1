#include <iostream>
#include <cmath>

using namespace std;

/*long potega_r(int podstawa, unsigned int wykladnik) 
{
	if (wykladnik == 0)
		return 1;
	else
		return podstawa*potega_r(podstawa, wykladnik-1);
}
*/
long potega_naiwna(int podstawa, unsigned int wykladnik)
{
	long iloczyn = 1;
	for (int i = 0; i < wykladnik; i++)
		iloczyn *= podstawa;
	return iloczyn;
}

	long potegabin(int podstawa, unsigned int wykladnik)
{
	long a;
	if (wykladnik == 0)
		return 1;
	if (wykladnik%2 == 1)
		return podstawa*potegabin(podstawa, (wykladnik-1));
	else
	{
		a = potegabin(podstawa, wykladnik/2);
		return a*a;
	}
}

int main()
{

    int a = 2, b = 20;
    
	cout << "Potegowanie na 2 sposoby:\nPotegowanie naiwne\t" << potega_naiwna(a,b) << "\nPotegowanie binarne\t" << potegabin(a,b) << endl;

    return 0;
}

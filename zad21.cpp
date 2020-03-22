#include <iostream>
#include <cmath>

using namespace std;

void findPrimeNumbers(int n)
{
    bool numbers[n + 1];

    for (int i = 2; i <= n; i++)
        numbers[i] = true;

    for (int j = 2; j <= sqrt(n); j++)
    {
        if (numbers[j] == false)
            continue;

        for (int i = 2; i <= (int)(n / j); i++)
            numbers[j * i] = false;
    }

    for (int i = 2; i <= n; i++)
    {
        if (!numbers[i])
            continue;

        cout << i << " ";
    }
}

int main()
{
    int n;

    cout << "Podaj liczbe: ";
    cin >> n;

    findPrimeNumbers(n);

    return 0;
}
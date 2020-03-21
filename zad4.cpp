#include <iostream>

using namespace std;

int **tabliczka_mnozenia(const int rozmiar)
{
    int **tab = new int *[rozmiar];

    for (int i = 0; i < rozmiar; i++)
    {
        tab[i] = new int[rozmiar];
    }

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            tab[i][j] = i * j;
        }
    }

    return tab;
}

int main()
{
    int **tab;
    const int rozmiar = 5;

    tab = tabliczka_mnozenia(rozmiar);

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            cout << tab[i][j] << " ";

            if (j == rozmiar - 1)
                cout << endl;
        }
    }

    for (int i = 0; i < rozmiar; i++)
    {
        delete[] tab[i];
    }

    delete[] tab;

    return 0;
}
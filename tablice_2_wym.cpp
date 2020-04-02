#include <iostream>
#include <ctime>

using namespace std;

short zakres = 10;

typedef const double CD;
typedef const unsigned short CUS;
typedef unsigned short US;
typedef unsigned int UI;
typedef const unsigned int CUI;

bool utworz(double **&T, US m, US n)
{
	if(m > 0 && n > 0)
	{
		T = new double*[m];
		for(US i = 0; i < m; ++i)
			T[i] = new double[n];
		for (US i = 0; i < m; i++)
			for (US j = 0; j < n; j++)
				T[i][j] = 0;
		return true;
	}
	else
		return false;
}

void zapisz(double **&T, CUS m, CUS n)
{
	for (US i = 0; i < m; i++)
	{
		for (US j = 0; j < n; j++)
			cout << T[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
}

void usun(double **&T, CUS m)
{
	for (US i = 0; i < m; i++)
		delete [] T[i];
	delete [] T;
}

void usun(double **&T, CUS m, double **&TT, CUS p)
{
	for (US i = 0; i < m; i++)
		delete [] T[i];
	delete [] T;
	for (US i = 0; i < p; i++)
		delete [] TT[i];
	delete [] TT;
}

bool czytaj(double **&T, US &m, US &n)
{
	cout << "Podaj ilosc wierszy" << endl;
	cin >> m;
	cout << "Podaj ilosc kolumn" << endl;
	cin >> n;

	if (utworz(T,m,n))
	{
		for (US i = 0; i < m; i++)
		{
			for (US j = 0; j < n; j++)
			{
				cout << "Podaj wartosc elementu [" << i << "][" << j << "] " << endl;
				cin >> T[i][j];
			}
			cout << endl;
		}
		return true;
	}
	else 
		return false;
} 

bool czytaj(double **&T, US &m, US &n, double **&TT, US &p, US &q)
{
	cout << "Podaj ilosc wierszy pierwszej macierzy" << endl;
	cin >> m;
	cout << "Podaj ilosc kolumn pierwszej macierzy" << endl;
	cin >> n;
	cout << "Podaj ilosc wierszy drugiej macierzy" << endl;
	cin >> p;
	cout << "Podaj ilosc kolumn drugiej macierzy" << endl;
	cin >> q;
	
	if (utworz(T,m,n) && utworz(TT,p,q))
	{
		for (US i = 0; i < m; i++)
		{
			for (US j = 0; j < n; j++)
			{
				cout << "Podaj wartosc elementu  [" << i << "][" << j << "] pierwszej macierzy" << endl;
				cin >> T[i][j];
			}
			cout << endl;
		}
		for (US i = 0; i < p; i++)
		{
			for (US j = 0; j < q; j++)
			{
				cout << "Podaj wartosc elementu  [" << i << "][" << j << "] drugiej macierzy" << endl;
				cin >> TT[i][j];
			}
			cout << endl;
			
		}
		return true;
	}
	else
		return false;
}

bool czytaj_losowo(double **&T, US &m, US &n)
{
	cout << "Podaj ilosc wierszy" << endl;
	cin >> m;
	cout << "Podaj ilosc kolumn" << endl;
	cin >> n;
	
	if(utworz(T,m,n))
	{
		for (US i = 0; i < m; i++)
			for (US j = 0; j < n; j++)
				T[i][j] = rand()%(10*zakres+1)*0.1 - 0.5*zakres;
		return true;
	}
	else 
		return false;
} 

bool czytaj_losowo(double **&T, US &m, US &n, double **&TT, US &p, US &q)
{
	cout << "Podaj ilosc wierszy pierwszej macierzy" << endl;
	cin >> m;
	cout << "Podaj ilosc kolumn pierwszej macierzy" << endl;
	cin >> n;
	cout << "Podaj ilosc wierszy drugiej macierzy" << endl;
	cin >> p;
	cout << "Podaj ilosc kolumn drugiej macierzy" << endl;
	cin >> q;
	
	if (utworz(T,m,n) && utworz(TT,p,q))
	{
		for (US i = 0; i < m; i++)
			for (US j = 0; j < n; j++)
			T[i][j] = rand()%(10*zakres+1)*0.1 - 0.5*zakres;
		for (US i = 0; i < p; i++)
			for (US j = 0; j < q; j++)
				TT[i][j] = rand()%(10*zakres+1)*0.1 - 0.5*zakres;
		return true;
	}
	else
		return false;
}

bool suma(double **&X, CUS m, CUS n, double **&Y, CUS p, CUS q, double **&T)
{
	if (m != p || n != q)
		return false;
	else
	{
		utworz(T,m,n);
		for (US i = 0; i < m; i++)
			for (US j = 0; j < n; j++)
				T[i][j] = X[i][j] + Y[i][j];
		return true;
	}
}

bool roznica(double **&X, CUS m, CUS n, double **&Y, CUS p, CUS q, double **&T)
{
	if (m != p || n != q)
		return false;
	else
	{
		utworz(T,m,n);
		for (US i = 0; i < m; i++)
			for (US j = 0; j < n; j++)
				T[i][j] = X[i][j] - Y[i][j];
		return true;
	}
}

bool iloczyn(double **&X, CUS m, CUS n, double **&Y, CUS p, CUS q, double **&T)
{
	if (n != p )
		return false;
	else
	{
		utworz(T,m,q);
		for (US i = 0; i < m; i++)
			for (US j = 0; j < q; j++)
			{
				T[i][j] = 0;
				for (US k = 0; k < n; k++)
					T[i][j] += X[i][k]*Y[k][j];
			}
		return true;
	}
}

void transponowanie(double **&X, CUS m, CUS n, double **&T)
{
		utworz(T,n,m);
		for (US i = 0; i < m; i++)
			for (US j = 0; j < n; j++)
				T[j][i] = X[i][j];

}
int main()
{
double **C;
{
srand(time(NULL));
double **A = 0, **B = 0;
unsigned short n = 2, m = 3, p = 3, q = 2;
if (czytaj_losowo(A, m, n, B, p, q)) {
	zapisz(A, m, n);
	zapisz(B, p, q);
}
usun(A,m,B,p);//zmiana z usun(A,n,m,B,p,q)
if (czytaj(A, m, n, B, p, q)) {
	zapisz(A, m, n);
	zapisz(B, p, q);
	if(!suma(A, m, n, B, p, q, C)){
		cerr << "Macierze maja nieprawidlowe wymiary - suma niemozliwa" << endl;
	}
	else{
		cout << "suma macierzy" << endl;
		zapisz(C, m, n);
		usun(C,m);
	}
	if(!roznica(A, m, n, B, p, q, C)){
		cerr << "Macierze maja nieprawidlowe wymiary - roznica niemozliwa" << endl;
	}
	else{
		cout << "roznica macierzy" << endl;
		zapisz(C, m, n);
		usun(C,m);
	}
	if(!iloczyn(A, m, n, B, p, q, C)){
		cerr << "Macierze maja nieprawidlowe wymiary - iloczyn niemozliwy" << endl;
	}
	else{
		cout << "iloczyn macierzy" << endl;
		zapisz(C, m, q);
		usun(C,m);
	}
	cout << "macierz przed transponowaniem" << endl;
	zapisz(B, p, q);
	cout << "macierz transponowana" << endl;
	transponowanie(B, p, q, C);// zmiana z transpose(B,p,q,C)
	zapisz(C, q, p);
	usun(C,m);
} 
usun(A,m);
usun(B,p);
	return 0;
}
}

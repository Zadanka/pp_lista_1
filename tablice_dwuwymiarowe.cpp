#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int n, m, x, y, p, q;
	double **C=0; 

void utworz(double**& Tab, int n, int m, double**& Tab2, int x, int y)
{
    Tab = new double*[n];
   	Tab2 = new double*[x];
   
    for (int i = 0; i < n; i++)
    {
        Tab[i] = new double[m];
    
    }
    for (int i = 0; i < x; i++)
    {
        Tab2[i] = new double[y];
    
    }
}

bool czytaj(double**& Tab, int n, int m, double**& Tab2, int x, int y)
{
	utworz(Tab, n, m, Tab2, x, y);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> Tab[i][j];
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cin >> Tab2[i][j];
    }
    return true;
}


bool czytaj_losowo(double**& Tab, int n, int m, double**& Tab2, int x, int y)
{
	utworz(Tab, n, m, Tab2, x, y);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            Tab[i][j] = rand() % 10 + 1;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            Tab2[i][j] = rand() % 10 + 1;
    }
    return true;
}

bool suma(double**& Tab, int n, int m, double**& Tab2, int x, int y, double**& Tab3)
{
    Tab3 = new double* [n];

    for (int i = 0; i < n; i++)
    {
        Tab3[i] = new double[m];
    }
    
    if(n==x&&m==y)
    {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            sum = sum + Tab[i][j] + Tab2[i][j];
            Tab3[i][j] = sum;
        }
        
    }
    return true;
	}
	else
	return false;
}

bool roznica(double**& Tab, int n, int m, double**& Tab2, int x, int y, double**& Tab3)
{
    Tab3 = new double* [n];

    for (int i = 0; i < n; i++)
    {
        Tab3[i] = new double[m];
    }

	if(n==x&&m==y)
    {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)	
        {
            int sum = 0;
            sum = sum + Tab[i][j] - Tab2[i][j];
            Tab3[i][j] = sum;
        }
    }
    return true;
	}
	else
	return false;
}

bool iloczyn(double**& Tab, int n, int m, double**& Tab2, int x, int y, double**& Tab3)
{
    Tab3 = new double* [n];

    for (int i = 0; i < n; i++)
    {
        Tab3[i] = new double[y];
    }
    
    for (int i=0; i<n; i++)
	{
		for (int j=0; j<y; j++)
		{
			Tab3[i][j]=0;
		}
	}
    		
    if(m==x)
    {
    	for (int i = 0; i < n; i++)
    	{
        	for (int j = 0; j < y; j++)
        	{
            int sum = 0;
            	for (int s = 0; s < m; s++)
            	{
                	sum = sum + Tab[i][s] * Tab2[s][j];
            	}
            Tab3[i][j] = sum;
        }
    }
    return true;
	}
	else
	return false;
}

void transpose(double**& Tab, int n, int m, double**& Tab3)
{
	Tab3 = new double* [n];
    for (int i = 0; i < n; i++)
    {
        Tab3[i] = new double[m];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            Tab3[j][i]=Tab[i][j];
        }
    }
}

void usun(double** Tab, const int n)
{
    for (int i = 0; i < n; ++i)
    delete[] Tab[i];
    delete[] Tab;
}

void zapisz(double** Tab, const int n, const int m)
{
	for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << Tab[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}

int main()
{
	cout << "Wyloswana macierz (A i B) : " << endl;
	{
	srand(time(NULL));
	double **A=0; double **B=0; 
 	unsigned int n = 2, m = 3, p = 3, q = 2;
	if (czytaj_losowo(A, m, n, B, p, q)) {
      zapisz(A, m, n);
      zapisz(B, p, q);
    usun(A,m);
    usun(A,m);
    }
}

double **A=0; double **B=0; 
unsigned int n = 2, m = 3, p = 3, q = 2;
cout << "Podaj 12 wartosci do wype³nienia macierzy (A i B)" << endl;
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
      zapisz(C, n, q);	
      usun(C,m);
   }
   cout << "macierz przed transponowaniem" << endl;
   zapisz(B, p, q);
   cout << "macierz transponowana" << endl;
   transpose(B, p, q, C);
   zapisz(C, q, p);
   usun(B,m);
   usun(C,m);
} 
    return 0;
}


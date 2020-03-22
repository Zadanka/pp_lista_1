#include<iostream>
#include<cstdlib>
using namespace std;

void dziel_i_zwyciezaj(int *tab, int ilosc, int &MIN, int &MAX)
{
	int i = 2;
	if(ilosc>=2)
	{
		if(tab[1]>tab[0])
		{
			MIN = tab[0];
			MAX = tab[1];
		}
		else
		{
			MIN = tab[1];
			MAX = tab[0];
		}	
		while(i+2<=ilosc)
		{
			if(tab[i]>tab[i+1])
			{
				if(tab[i]>MAX) 
					MAX = tab[i]; 
				if(tab[i+1]<MIN)
					MIN = tab[i+1];
			}
			else
			{
				if(tab[i+1]>MAX) 
					MAX = tab[i+1]; 
				if(tab[i]<MIN)
					MIN = tab[i];
			}
		i=i+2;
		}
		if(ilosc%2!=0) 
		{
			if(tab[i] > MAX)
				MAX = tab[i];
			if(tab[i] < MIN)
				MIN = tab[i];
		}
	}
	else
	{
		MIN = MAX = tab[0];
	}	
}

int main()
{
	const int rozmiar = 100;
	int MIN, MAX, tab[rozmiar]; 
	int ilosc;
	cout<<"Podaj ilosc licz: ";
	cin>>ilosc;
	for(int i=0;i<ilosc;i++)
	{
		cout<<"Podaj "<<i+1<<" liczbe: ";
		cin>>tab[i];
	}
	dziel_i_zwyciezaj(tab, ilosc, MIN, MAX);
	cout<<"MIN: "<<MIN<<endl;
	cout<<"MAX: "<<MAX<<endl;
	return 0;
}

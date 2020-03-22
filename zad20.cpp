#include<iostream>
using namespace std;

int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a=a-b;
       else
           b=b-a;
    return a;
}

int main()
{
    int a, b;
    cout<<"Podaj dwie liczby: "<<endl;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"Podaj liczbe b: ";
	cin>>b;
    cout<<"Najwiekszy wspolny dzielnik wynosi: "<<NWD(a,b)<<endl;
    return 0;
}


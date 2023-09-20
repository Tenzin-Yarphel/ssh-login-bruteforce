//date 29-08-2023
//Multiplicative inverse

#include<iostream>
#include<string.h>
using namespace std;

int Minverse(int A, int M);
int main()
{
	int a,m;
	cout<<"enter the value of a = " ;
	cin>>a;
	cout<<"enter the value of m = " ;
	cin>>m;
	int r = Minverse(a,m);
	cout<<"Multiplicative inverse = "<<r<<endl;
	
}

int Minverse(int A, int M)
{
	int X;
	for(X=1;X<M;X++)
	{
		if(((A%X)*(X%M)) % M == 1)
		{
			return X;
		}
	}
}

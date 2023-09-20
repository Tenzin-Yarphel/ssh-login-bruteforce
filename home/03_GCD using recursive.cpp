#include<iostream>
using namespace std;

int GCD(int x, int y);
int main()
{
	int a,b,gcd;
	cout<<"enter the first value = ";
	cin>>a;
	cout<<"enter th second value = ";
	cin>>b;
	gcd=GCD(a,b);
	cout<<"GCD = "<<gcd;
	
}

int GCD(int x, int y)
{
	if(x==0)
	{
		return y;
	}
	else 
	{
		return GCD(y%x,x);
	}
}

#include<iostream>
using namespace std;
int main()
{
	int a,b,gcd;
	cout<<"enter the first value = ";
	cin>>a;
	cout<<"enter th second value = ";
	cin>>b;
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else 
		{
			b=b-a;
		}
	}
	gcd=a;
	cout<<"GCD "<<gcd<<endl;
}

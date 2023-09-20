//Date 12th Sep 2023
//XOR cipher

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int A[8],K[8],H[8],i,j;
	cout<<"Enter the 8 bits of array A"<<endl;
	for(i=0; i<8; i++)
	{
		cin>>A[i];
	}
	fflush(stdin);
	cout<<"ENter 8 bits of array K"<<endl;
	for(i=0; i<8; i++)
	{
		cin>>K[i];
	}
	
	for(i=0; i<8; i++)
	{
		H[i]=A[i]^K[i];
	}
	cout<<endl;
	cout<<"HASHCODE = ";
	
	for(i=0;i<8;i++)
	{
		cout<<H[i];
	}
}


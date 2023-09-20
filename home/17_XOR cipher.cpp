//Date 12th Sep 2023
//XOR cipher
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int A[8]={0,1,1,0,0,1,1,0};
	int K[8]={1,1,0,1,0,1,0,1};
	int H[8];
	
	int i;
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



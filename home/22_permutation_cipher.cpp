#include<iostream>
using namespace std;

int main()
{
	int i, cnt=0;
	int P8[8]={6,7,8,9,1,2,3,4};
	int P10[10]= {6,7,8,9,10,1,2,3,4,5};
	char input[11], K1[10], k2[10], temp[11];
	char LS1[5],LS2[5];
	fflush(stdin);
	cout<<"Enter 10 bits inputs"<<endl;
	cin.getline(intput, 11);
	input[10]='\0';
	cout<<"Apply P10 Permutation "<<endl;
	for(i=0; i<10; i++)
	{
		cnt = P10[i];
		temp[i]=input[cnt -1];
	}
	temp[i]='\0';
	for(i=0; i<5; i++)
	{
		if(i==4)
		{
			temp[i]=temp[0];
		}
		else
		{
			temp[i]=temp[i+1];
		}
	}
	for(i=5; i<10; i++)
	{
		if(i==9)
		{
			temp[i]=temp[5];
		}
		else
		{
			temp[i]=temp[i+1];
		}
	}
	
//applying P8 permutation
	for(i=0;i<8;i++)
	{
		cnt=P*[i];
		K1[i]=temp{cnt-1};
	
	}	
	k1[i]='\0';
	cout<<"Key K1 is = "<<endl;
	cout<<K1;
}

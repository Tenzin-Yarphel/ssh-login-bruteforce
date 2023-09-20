//7th Sep,2023
// file affin cipher
//important for ete

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
	char P[100], T[100], C[100], O[100];
	int i,j,x;
	char AL[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','U','V','W','X','Y','Z'};
	int  M[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
	cout<<"Enter your plain text = ";
	cin.getline(P,100);
	int k1=7,k2=9;
	//Convert to uppercase;
	for(i=0;P[i]!='\0';i++)
	{
		if(P[i]>='a' && P[i]<='z')
		{
			P[i]=P[i]-32;
		}
	}
	cout<<"upper case letter = "<<P<<endl;
	
	for(i=0;P[i]!='\0';i++)
	{
		if(P[i]!=' ')
		{
		x=(int(P[i])*k1)%26;
		for(j=0;j<26;j++)
		{
			if(x==M[j])
			{
				T[i]=AL[j];
			}
		}
	}
	else
	{
		T[i]=P[i];	
	}
	}
	T[i]='\0';
	cout<<"Initial cipher Text = "<<T<<endl;
	
	for(i=0;T[i]!='\0';i++)
	{
		if(T[i]!=' ')
		{
			x=(int(T[i])+k2)%26;
			for(j=0;j<26;j++)
			{
				if(x==M[j])
				{
					C[i]=AL[j];
				}
			}
		}
		else
		{
			C[i]=T[i];
		}
	}
	C[i]='\0';
	cout<<"Final cipher text = "<<C<<endl;
	
	//Multiplicative Inverse
	
	int m;
	for(i=1;i<k1;i++)
	{
		m=(i*26)+1;
		if(m % k1==0)
		{
			break;
		}
	}
	m=m/k1;
	
	//Decryption
	for(i=0;C[i]!='\0';i++)
	{
		if(C[i]!=' ')
		{
			x=((int(C[i])-k2)+26)%26;
			for(j=0;j<26;j++)
			{
				if(x==M[j])
				{
					T[i]=AL[j];
				}
			}		 
		}
		else
		{
			T[i]=C[i];
		}
	}
	T[i]='\0';
	cout<<"Temporary cipher = "<<T<<endl;
	
	
	for(i=0;T[i]!='\0';i++)
	{
		if(T[i]!=' ')
		{
			x=(int(T[i])*m)%26;
			for(j=0;j<26;j++)
			{
				if(x==M[j])
			{
			O[i]=AL[j];
		}
	} 
	}
		else
		{
			O[i]=T[i];
		}
	}
	O[i]='\0';
	cout<<"ORIGINAL CIPHER = "<<O<<endl;
	fout.open("affin_output.txt", ios::app);
	fout<<O<<endl;
}






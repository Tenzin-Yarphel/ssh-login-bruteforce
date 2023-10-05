//Date 26th Sep 2023
//ficher cipher using file system

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char PT[17],ch;
	int LPT[8], RPT[8], i, j;
	ifstream fin;
	fin.open("hello.txt", ios::in);
	i=0;
	while(!fin.eof())
	{
		fin.get(ch);
		PT[i]=ch;
		i=i+1;
	}
	PT[i]='\0';
	fin.close();
	cout<<"PLain text bits = "<<PT;
	
	for(i=0; i<8; i++)
	{
		LPT[i]=PT[i]-48;
	}
	for(i=8,j=0;i<16;i++,j++)
	{
		RPT[j]=PT[i]-48;
	}
	int key[8];
	cout<<"\nEnter key"<<endl;
	for(i=0;i<8;i++)
	{
		cin>>key[i];
	}
	
	int ENC[16];
	
	for(i=0;i<8;i++)
	{
		ENC[i]=RPT[i]^key[i];
	}
	for(i=8,j=0;j<16;i++,j++)
	{
		ENC[i]=LPT[j];
	}
	ofstream fout;
	fout.open("hello.txt", ios::app);
	fout<<"\nEncrypted bits are "<<endl;
	for(i=0;i<16;i++)
	{
		fout<<ENC[i];
	}
	fout.close();
}

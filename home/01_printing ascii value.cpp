#include<iostream>
using namespace std;

//ASCII of Lower case apphabet

int main()
{
	char AL[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	cout<<"ASCII values of aplhabets are "<<endl;
	for(i=0;i<26;i++)
	{
		cout<<AL[i]<<" is "<<int(AL[i]);
		cout<<endl;
	}
}

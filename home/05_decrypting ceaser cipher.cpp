#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//Declaring all variable
	int i,key;
	char s[100];
	char c;
	
	//Taking Input
	fflush(stdin);
	cout<<"Enter the Encrpyted text "<<endl;
	cin.getline(s,100);
	cout<<"enter key"<<endl;
	cin>>key;
	int n=strlen(s);
	
	for(i=0; i<n; i++)
	{
		c=s[i];
		if(c>='a' && c<='z')
		{
			c = c - key;
			if(c < 'a')
			{
				c = c + 'z' - 'a' + 1;
			}
			s[i] = c;
		}
		else if(c >='A' && c<='Z')
		{
			c = c + key;
			if(c < 'A')
			{
				c = c + 'Z' - 'A' + 1;
			}
			s[i] = c;
		}
	}
	cout<<"Original plain text = ";
	puts(s);
}

//Ceaser Cipher

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
	cout<<"Enter a plaintext to encrypt"<<endl;
	cin.getline(s,100);
	cout<<"enter key"<<endl;
	cin>>key;
	int n=strlen(s);
	
	//Entrypting each letter according to given key
	for(i=0; i<n; i++)
	{
		c=s[i];
		if(c>='a' && c<='z')
		{
			c = c + key;
			if(c > 'z')
			{
				c = c - 'z' + 'a' - 1;
			}
			s[i] = c;
		}
		else if(c >='A' && c<='Z')
		{
			c = c + key;
			if(c > 'Z')
			{
				c = c - 'Z' + 'A' - 1;
			}
			s[i] = c;
		}
	}
	cout<<"Final output = ";
	puts(s);
}


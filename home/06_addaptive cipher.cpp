//addative cipher

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	int key,i;
	char ch;
	cout<<"enter your plain text"<<endl;
	cin.getline(str,100);
	cout<<"enter your key : ";
	cin>>key;
	for(i=0; str[i]!='\0'; i++)
	{
		ch = str[i];
		if(ch>=97 && ch<= 122)
		{
			ch = (ch - 'a' + key ) % 26 + 'a';
		}
		else if(ch>=48 && ch<=57)
		{
			ch = (ch - '0' + key ) % 10 +'0';
		}
		else 
		{
			continue;
		}
		str[i]= ch;
	}
	cout<<"encrypted string is = "<<str<<endl;
	
}

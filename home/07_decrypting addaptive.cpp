//Decrypting ceaser cipher using mod

#include<iostream>
#include<string.h>
using namespace std;

void decrypt(char str[], int size, int key);

int main()
{
	char str[100];
	int k; 
	cout<<"Enter the string = ";
	cin.getline(str,100);
	cout<<"Enter the key = ";
	cin>>k;
	decrypt(str, 100, k);
}

void decrypt(char str[],int size, int key)
{
	char ch;
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		ch=str[i];
		if(ch>='a' && ch<='z')
		{
			ch = (ch - 'a' - key + 26 )% 26 + 'a';
			str[i]=ch;
		}
		else if(ch>='A' && ch <='Z')
		{
			ch = (ch - 'A' - key + 26)%26 + 'A';
			str[i]=ch;
		}
		else if(ch>='0' && ch<='9')
		{
			ch = (ch - '0' - key + 10)% 10 +'0';
			str[i]=ch;
		}
		else if(ch==32)
		{
			continue;
		}
	}
	cout<<"Encrypterd Text "<<endl;
	cout<<str;
}

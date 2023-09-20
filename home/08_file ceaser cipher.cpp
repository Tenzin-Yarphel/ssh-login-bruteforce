//taking content from "abc.txt" file and outputing the encrypted content in "update.txt" file

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("abc.txt",ios::in);
	char s[100];
	fin.getline(s,100);
	cout<<"Content of file = "<<s<<endl;
	fin.close();
	
	int key,i,n;
	char c;
	n = strlen(s);
	cout<<"Enter key"<<endl;
	cin>>key;
	
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
	
	
	ofstream fout;
	fout.open("update.txt", ios::out);
	fout<<"Encrypted text = ";
	fout<<s;
	fout.close();
}

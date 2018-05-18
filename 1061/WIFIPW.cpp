#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;

int main(void)
{
	string a;
	string c;
	c="NOIP@CCF";
	char b;
	while(1)
	{
		cin>>b;
		if(b=='Y')
		{
			cin>>a;
			if(a==c)
			{
				cout<<"Success";
				return 0;
			}
			else
			{
				cout<<"Sorry"<<endl;
			}
		}
		else if(b=='N')
		{
			return 0;
		}
	}
	return 0;
}

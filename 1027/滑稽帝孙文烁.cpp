#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	string b;
	long a=0;
	cin>>b;
	for(int i=0;i<b.size();i++)
	{
		a+=b[i]-'0';
	}
	cout<<a;
	return 0;
}

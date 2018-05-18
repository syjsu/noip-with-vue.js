#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
	int a,b,i,s=1;
	cin>>a>>b;
	for(i=1;i<=b;i++)
	{
		s*=a;
		s%=10;
	}
	cout<<s<<"\n";
	return 0;
}

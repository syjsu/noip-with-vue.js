#include<fstream>
#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
	unsigned long n;
	cin>>n;
	char p[10]="1234567";
	int a=3,b=4;
	int l=0,pr=0;
	while(n>7)
	{
		a=4;b=3;
		l=0;pr=0;
		while(l<n)
		{
			pr=l;
			l=b+a;
			a=b;
			b=l;
		}
		n=n-pr;
	}
	cout<<p[n-1];
	return 0;
}
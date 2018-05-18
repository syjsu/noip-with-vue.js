#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
    if (a>b)
    {
    	t=a;
    	a=b;
    	b=t;
    }
    if (b>c)
    {
    	t=b;
    	b=c;
    	c=t;
    }
    if (a>b)
    {
    	t=a;
    	a=b;
    	b=t;
    }
	if (a+b<=c)
	cout<<"NO\n";
	else
	if (a==b&&b==c)
	cout<<"Equilateral\n";
	else
	if (a*a+b*b==c*c)
	cout<<"Right\n";
	else
	cout<<"General\n";
	return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double e=0,b=0,sum=0,c=0,a,d=0;
	for (int i=1;i<=10;++i)
	{
		cin>>a;
		if (a>c)
		{
			c=a;
		}
		if (i==1)
		{
			d=a;
		}
		if (a<d&&i!=1)
		{
			d=a;
		}
		sum+=a;
	}
	b=sum-c-d;
	e=b/8;
	printf("%.3lf",e);
}

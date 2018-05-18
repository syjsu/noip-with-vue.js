#include<iostream>
using namespace std;
int main()
{
	long long a,b,c=1,d;
	cin>>a>>b;
	if (a>b)
	{
		d=b;
	}
	else
	{
		d=a;	
	}
	for (int i=2;i<=d;++i)
	{
		if (a%i==0&&b%i==0)
		{
			c=0;
			break;
		}
	}
	if (c==0)
	{
		cout<<"No";
	}
	if (c==1)
	{
		cout<<"Yes";
	}
	return 0;
}

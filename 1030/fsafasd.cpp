#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;
int main()
{
	long long a,sum=1;
	cin>>a;
	while (a!=1)
	{
		if (a%2==0)
		{
			a=a/2;
			sum++;
		}
		else
		{
			a=3*a+1;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}

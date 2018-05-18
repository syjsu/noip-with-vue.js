#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;

unsigned long long zuheshu(unsigned long long n,unsigned long long m)
{
	if(m<=n-m)  m=n-m;
	long long ans=1;
	for(int i=m+1;i<=n;i++)
	ans*=i;
	for(int i=1;i<=n-m;i++)
	ans/=i;
	return ans;
}

int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<zuheshu(a,b);
	return 0;
}

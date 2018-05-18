#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int f[32],n,i;
	f[1]=0;
	f[2]=1;
	cin>>n;
	for(i=3;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[n]<<endl;
	return 0;
 } 

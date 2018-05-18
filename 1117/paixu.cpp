#include<iostream>
using namespace std;
int main()
{
	int a[100001],n,t;
	cin>>n;
	for (int i=0;i<=100000;++i)
	{
		a[i]=0;
	}
	for (int i=1;i<=n;++i)
	{
		cin>>t;
		a[t]++;
	}
	for (int i=0;i<=100000;++i)
	{
		for (int j=1;j<=a[i];++j)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,j,n,m,a[101][101],s,l;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=1;j<=m;j++)
	{
		for(i=n;i>=1;i--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


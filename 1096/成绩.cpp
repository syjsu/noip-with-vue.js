#include<iostream>
#include<cstdio>
using namespace std;
int a[1001][6],k[1001][7];
int sum[1001]={0};
int main( )
{
	int n,m,num;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=5;j++)
	  cin>>a[i][j];
	for(int i=1;i<=m;i++)
	 for(int j=1;j<=6;j++)
	  cin>>k[i][j];
	for(int i=1;i<=m;i++)
	{
	  num=k[i][6];
	  for(int j=1;j<=5;j++)
	   sum[i]+=a[num][j]*k[i][j];
	}
	 for(int i=1;i<=m;i++)
	  cout<<sum[i]<<' ';
	return 0; 
} 

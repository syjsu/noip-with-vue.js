#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[100][100],b[100][100];
	double m,n,ans,s=0;
	scanf("%lf%lf",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==b[i][j])
			  s++;
		}
	}
	ans=s/(m*n)*100;
	printf("%0.2lf",ans);
	return 0;
 } 

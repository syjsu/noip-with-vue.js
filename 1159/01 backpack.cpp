//f[i][j] => 把第i个物品放入承重为j的背包中的最大价值
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,t,i,j,w[101],v[101],f[101][1001]={0};
	cin>>n>>t;
	for(i=1;i<=t;i++)
	{
		cin>>w[i]>>v[i];
	} 
	for(i=1;i<=t;i++)
	{
		for(j=1;j<=n;j++)
		{
			if (w[i]>j)
			{
				f[i][j]=f[i-1][j];
			}
			else
			{
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<f[t][n]<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mn[105][105],rs[105][105],check[3];
	memset(check,0,sizeof(check));
	memset(mn,0,sizeof(mn));
	memset(rs,0,sizeof(rs));
	int m,n,r,s,sum=0,mix=1000000,h=1,l=1;cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)cin>>mn[i][j];
	cin>>r>>s;
	for(int i=1;i<=r;i++)
		for(int j=1;j<=s;j++)cin>>rs[i][j];
	for(int i=1;i<=m-r+1;i++)
	{
		for(int j=1;j<=n-s+1;j++)
		{
			for(int q=i;q<=i+r-1;q++)
			{
				for(int w=j;w<=j+s-1;w++)
				{
					if((rs[h][l]-mn[q][w])<0)
					sum-=(rs[h][l]-mn[q][w]);
					else
					sum+=(rs[h][l]-mn[q][w]);
					l++;
				}
				h++;l=1;
			}
			h=1;l=1;
			if(sum<mix)
			{
				mix=sum;check[1]=i;check[2]=j;
			}
			sum=0;
		}
	}
	for(int i=check[1];i<=check[1]+r-1;i++)
	{
		for(int j=check[2];j<=check[2]+s-1;j++)
		{
			cout<<mn[i][j]<<" ";
		}
		if(i<check[1]+r-1)cout<<endl;
	}
return 0;
}

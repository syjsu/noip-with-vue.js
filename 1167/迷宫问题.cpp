#include<iostream>
using namespace std;
int xx[9]={-1,-1,0,1,1,1,0,-1};
int yy[9]={0,-1,-1,-1,0,1,1,1};
int tot;
int n;
int a[101][101];
int vis[101][101];
void f(int x,int y)
{
	if(x==1&&y==n)
	{
		tot++;
		return;
	}
	else
	{
		for(int i=0;i<8;i++)
		{
			if(x+xx[i]>=1&&x+xx[i]<=n&&y+yy[i]>=1&&y+yy[i]<=n&&a[x+xx[i]][y+yy[i]]==0&&vis[x+xx[i]][y+yy[i]]==0)
			{
				vis[x+xx[i]][y+yy[i]]=1;
				f(x+xx[i],y+yy[i]);
				vis[x+xx[i]][y+yy[i]]=0;
			}
		}
	}
}
int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	a[1][1]=1;
	f(1,1);
	cout<<tot;
	return 0;
}

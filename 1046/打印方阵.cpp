#include<iostream>
#include<cstring>
using namespace std;

int a[101][101]={0};

int main()
{
	int x=1,y=1,n,t=0;
	cin>>n;
	a[1][1]=++t;

	while(t<n*n)
	{
		if(!a[x][y+1]&&y+1<=n) a[x][++y]=++t; 
		else if(!a[x+1][y]&&x+1<=n) a[++x][y]=++t;
		while(!a[x+1][y-1]&&x+1<=n&&y-1>=1) a[++x][--y]=++t; 
		if(!a[x+1][y]&&x+1<=n) a[++x][y]=++t;
		else if(!a[x][y+1]&&y+1<=n) a[x][++y]=++t;
		while(!a[x-1][y+1]&&x-1>=1&&y+1<=n) a[--x][++y]=++t; 
	}
	
	for(int j=1;j<=n;j++)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<a[i][j];
	    		if(i<n) cout<<" ";
			}
			cout<<endl;
		}
}

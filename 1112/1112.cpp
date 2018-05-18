#include<bits/stdc++.h>
using namespace std;
int n,m,black[102][102],ans,vis[102][102];
void dfs(int x,int y)
{
	if(!black[x][y] || vis[x][y])return;
	vis[x][y]=1;
	           dfs(x-1,y);
	dfs(x,y-1);           dfs(x,y+1);
	           dfs(x+1,y);
} 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>black[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(!vis[i][j] && black[i][j])
			{
				ans++;
				dfs(i,j);
			}
	cout<<ans;
	return 0;
}



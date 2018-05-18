#include<cstdio>
int n,m,total,wayr[4]={-1,1,0,0},wayc[4]={0,0,-1,1};
char map[100][100];
bool flag[100][100];
bool check(int x,int y)
{
	if(x>=0&&y>=0&&x<n&&y<m&&!flag[x][y]&&map[x][y]-'0') return 1;
	return 0;
}
void dfs(int r,int c)
{
	for(int i=0;i<4;i++)
		if(check(r+wayr[i],c+wayc[i]))
		{
			flag[r+wayr[i]][c+wayc[i]]=1;
			dfs(r+wayr[i],c+wayc[i]);
		}
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%s",map[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(!flag[i][j]&&map[i][j]-'0')
			{
				flag[i][j]=1;
				total++;
				dfs(i,j);
			}
	printf("%d",total);
}
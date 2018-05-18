#include<cstdio>
int e[205],n,a,b,Min=-1;
bool v[205]={0};
void dfs(int x,int y)
{
	v[x]=0;
	if(x==b&&Min==-1)
	{
	   Min=y;
	   return;
}
	int up=x+e[x],down=x-e[x];
	if(up<=n&&v[up])dfs(up,y+1);
	if(down>0&&v[down])dfs(down,y+1);
}
int main()
{
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=n;i++)
	{
	  scanf("%d",&e[i]);
	  v[i]=1;
}
	dfs(a,0);
	printf("%d\n",Min);
	return 0; 
}

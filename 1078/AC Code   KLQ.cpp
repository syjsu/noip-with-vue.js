#include<cstdio>
using namespace std;

int flnum,st,ed,count=0,ans=-1;
int fl[205];
bool visit[205];
	
int main()
{
	void dfs(int,int);
	scanf("%d%d%d",&flnum,&st,&ed);
	for(int i=1;i<=flnum;i++)
	{
		scanf("%d",&fl[i]);
		visit[i]=true;
	}
	dfs(st,ed);
	printf("%d",ans);
	return 0;
}

void dfs(int st,int ed)
{
	visit[st]=false;
	if(st==ed)
	{
		if(ans==-1)
		{
			ans=count;
			count--;
			return;
		}
		else if(count<ans)
		{
			ans=count;
			count--;
			return;
		}
	}
	if(st+fl[st]>0&&st+fl[st]<=flnum&&visit[st+fl[st]])
	{
		count++;
		dfs(st+fl[st],ed);
	}
	if(st-fl[st]>0&&st-fl[st]<=flnum&&visit[st-fl[st]])
	{
		count++;
		dfs(st-fl[st],ed);
	}
	if(count!=0) count--;
	return;
}

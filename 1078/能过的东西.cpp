#include<cstdio>
using namespace std;

int N,A,B;
int ki[210];
bool visit[210];
int ans;
int minans=2147483647;

void dfs(int m)
{
	int i;
	visit[m]=true;
	for(i=1;i<=N;i++)
	{
		if(!visit[i]&&i!=B&&ki[i]!=0)
		{
			if(i+ki[i]==m||i-ki[i]==m)
			{
				ans++;
				if(i==A)
				{
					if(ans<minans)
					minans=ans;
				}
				else
				dfs(i);
				ans--;
			}
		}
	}
	visit[m]=false;
}

int main()
{
	int i;
	scanf("%d%d%d",&N,&A,&B);
	for(i=1;i<=N;i++)
	scanf("%d",&ki[i]);
	ans=0;
	if(A==B)
	printf("0");
	else
	{
	dfs(B);
	if(minans==2147483647)
	printf("-1");
	else
	printf("%d",minans);
	}
	return 0;
}

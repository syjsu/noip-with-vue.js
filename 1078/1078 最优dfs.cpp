#include<bits/stdc++.h>
using namespace std;
#define maxn 202
int k[maxn],times[maxn],a,b,n;
void dfs(int now,int step)
{
	if(times[now]<=step)
		return;
	times[now]=step;
	if(now-k[now]>0)
		dfs(now-k[now],step+1);
	if(now+k[now]<=n)
		dfs(now+k[now],step+1);
}
int main()
{
	memset(times,0x3f3f3f3f,sizeof times);
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)
		cin>>k[i];
	dfs(a,0);
	if(times[b]==0x3f3f3f3f)
		cout<<"-1";
	else
		cout<<times[b];
	return 0;
}

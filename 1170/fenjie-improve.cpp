#include <cstdio>
#include <cstring>
#define maxn 31684
int main()
{
	bool vis[maxn+1];
	int m=178;
	memset(vis,1,sizeof(vis));
	for(int i=2;i<=m;i++)if(vis[i])
		for(int j=i*i;j<=maxn;j+=i)vis[j]=0;
	int s;
	scanf("%d",&s);
	for(int i=2;i<maxn;i++)
		while(vis[i]&&s%i==0){
			printf("%d",i);
			s/=i;
			if(s!=1)printf("*");
		}
	if(s!=1)printf("%d",s);
	getchar();
	getchar();
	return 0;
}
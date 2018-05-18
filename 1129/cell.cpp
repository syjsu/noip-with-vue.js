#include <cstdio>
#include <cstring>
using namespace std;
int n,m;
void open(bool* a)
{
	if(*a){
		*a=0;
		open(a-1);
		open(a+1);
		open(a-m-2);
		open(a+m+2);
	}
}
int main()
{
	int sum=0;
	scanf("%d%d",&n,&m);
	bool ans[n+2][m+2];
	memset(ans,0,sizeof(ans));
	for(int i=1;i<=n;i++){
		char tem[m+1];
		scanf("%s",tem);
		for(int j=1;j<=m;j++){
			if(tem[j-1]=='0')ans[i][j]=0;
			else ans[i][j]=1;
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(ans[i][j]){
				sum++;
				open(&ans[i][j]);
			}
	printf("%d",sum);
	getchar();
	getchar();
	return 0;
}
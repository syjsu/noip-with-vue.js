#include<cstdio>
#include<cstdlib>
using namespace std;
bool mp[105][105];
int n,m,ans=0;
char fstchar(){
	char ch=getchar();
	while(ch<'0'||ch>'9') ch=getchar();
	return ch;
}
void print(int x){
	printf("%d",x);
	exit(0);
}
bool check(int i,int j){
	if(i>n||j>m||i<0||j<0) return 0;
	return 1;
}
void dfs(int i,int j){
	if(!check(i,j)||!mp[i][j]) return;
	mp[i][j]=0;
	dfs(i+1,j);
	dfs(i,j+1);
	dfs(i-1,j);
	dfs(i,j-1);
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		mp[i][1]=fstchar()-'0';
		for(int j=2;j<=m;j++){
			mp[i][j]=!(getchar()-'0'==0);
		}
	}
	for(int i=1;i<=n;i++){
//		putchar('\n');
		for(int j=1;j<=m;j++){
//			printf("%d",mp[i][j]);
			if(mp[i][j]) dfs(i,j),ans++;
		}
	}
	printf("%d",ans);
	return 0;
}

//By:Chenye Jin
//QQ:1293883574

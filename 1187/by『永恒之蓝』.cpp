#include<iostream>
using namespace std;
int m,n,cnt,box[51]={1};
void dfs(int dep,int left){
	for(int i=box[dep-1];i<=left;i++){
		box[dep]=i;
		if(left-box[dep]==0&&dep==n)cnt++;
		dfs(dep+1,left-box[dep]);
	}
}
int main(){
	cin>>m>>n;
	dfs(1,m);
	cout<<cnt;
}

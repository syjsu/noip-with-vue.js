#include<iostream>
#include<cstdio>
using namespace std;

int map[15][15];
int N,ans=0;
int nxt[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
bool book[15][15];

void DFS(int h,int l);

int main()
{
	cin>>N;
	for(int q=1;q<=N;q++)
		for(int w=1;w<=N;w++)
			scanf("%d",&map[q][w]);			//map[ÐÐ][ÁÐ];
	book[1][1]=1;
	DFS(1,1);
	cout<<ans;
	return 0;
}

void DFS(int h,int l)
{
	if(h==1 && l==N){
		ans++;
		return;
	}
	for(int q=0;q<8;q++){
		int nx=h+nxt[q][0];
		int ny=l+nxt[q][1];
		if(nx<=0 || nx>N ||ny<=0 || ny>N || book[nx][ny]==1 || map[nx][ny]==1)
			continue;
		book[nx][ny]=1;
		DFS(nx,ny);
		book[nx][ny]=0;
	}
}

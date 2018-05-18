#include<iostream>
using namespace std;
char aa[501][501];
int bb[501][501],cscs=0;
int xx,yy;
int dfs(int,int);
int pd(int,int);
int main()
{
	int i,j,star=0;
	cin>>xx>>yy;
	for(i=1;i<=xx;i++)
	cin>>aa[i];
	for(i=1;i<=xx;i++)
	for(j=0;j<yy;j++)
	if(aa[i][j]=='*') star++;
		
	dfs(1,0);
   cout<<xx*yy-star-cscs;
return 0;
}
int pd(int x,int y)
{
	if(x>=1 && x<=xx && y>=0 && y<yy && bb[x][y]==0 && aa[x][y]=='0') return 1; else return 0;
}
int dfs(int x,int y)
{
	if(pd(x,y)==1) {cscs++;bb[x][y]=1;}
	if(aa[x][y]=='0')
	{
	dfs(x+1,y);
	dfs(x,y+1);
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int gx[4]={0,0,1,-1};
const int gy[4]={1,-1,0,0};
char map[100][100];
int qx[1000],qy[1000];

void BFS(int x,int y)     
{
	int head=0,tail=1,tx,ty;
	
	map[x][y]='0';
	qx[tail]=x;
	qy[tail]=y;
	
	while(head<tail)
	{
		head++;
		tx=qx[head];
		ty=qy[head];
		for (int i=0;i<4;i++)
			{
				x=tx+gx[i];
				y=ty+gy[i];
				if(map[x][y]=='0') continue;
				map[x][y]='0';
				tail++;
				qx[tail]=x;
				qy[tail]=y;
			}
	}
}

int main()
{
	int n,m,ans=0;
	scanf("%d%d\n",&n,&m);       

	memset(map,'0',sizeof(map));

	for(int i=1;i<=n;i++)
	{
	   for(int j=1;j<=m;j++)
	      scanf("%c",&map[i][j]);
	   scanf("\n");
	}
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if (map[i][j]!='0') 
				{
					BFS(i,j);   
					ans++;       
				}
	printf("%d\n",ans);
	return 0;
}

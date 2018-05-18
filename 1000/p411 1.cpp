#include<cstdio>
#include<cstring>
#include<cstdlib>

#define MAXN 10
#define MAXM 10

int map[12][12],qx[200],qy[200];

int BFS(int x,int y)
{
	const int gx[4]={0,0,1,-1};
	const int gy[4]={1,-1,0,0};
	int head=1,tail=0,tx,ty,count=0;
	map[x][y]=-1;
	qx[head]=x;
	qy[head]=y;
	
	while(head!=tail)
	{
		count++;
		tail++;
		tx=qx[tail];
		ty=qy[tail];
		for (int i=0;i<4;i++)
			{
				x=tx+gx[i];
				y=ty+gy[i];
				if (map[x][y]!=-1) 
				{
				  map[x][y]=-1;
				  head++;
				  qx[head]=x;
				  qy[head]=y;
                }  
			}
	}	
	return count;
}



int main()
{
	int i,j,ans=0;
	memset(map,255,sizeof(map));
	for (i=1;i<=MAXN;i++)
	{
		for (j=1;j<=MAXM;j++)
		{
			scanf("%d",&map[i][j]);
			map[i][j]=-map[i][j];
		}
	}
	for (i=1;i<=MAXN;i++)
	{
		if (map[i][1]==0) BFS(i,1);
		if (map[i][MAXM]==0) BFS(i,MAXM);
		if (map[1][i]==0) BFS(1,i);
		if (map[MAXM][i]==0) BFS(MAXM,i);
	}
	for (i=1;i<=MAXN;i++)
		for (j=1;j<=MAXM;j++)
			if (map[i][j]==0) ans++;
	printf("%d\n",ans);
	system("pause"); 
	return 0;
}





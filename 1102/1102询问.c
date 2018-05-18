/*
新疆师大附中 杜江涛
20170701 
*/
#include<stdio.h>
int main()
{
	int i,j,k,n,m,q,x,y,a[501][501],t;
	char c[2];
	//freopen("in.txt","r",stdin);
	scanf("%d %d",&n,&m);
	for(i=1; i<=n; i++)
		for(j=1; j<=m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	scanf("%d",&q);	
	for(k=1; k<=q; k++)
	{
		scanf("%s%d%d",c,&x,&y);
		//printf("%c %d %d\n\n",c[0],x,y);
		if(c[0]=='C')
		{
			for(i=1; i<=m; i++)
			{
				t=a[x][i];
				a[x][i]=a[y][i];
				a[y][i]=t;
			}
		}
		if(c[0]=='Q')
		{
			printf("%d\n",a[x][y]);
		}
	}
	return 0;
}

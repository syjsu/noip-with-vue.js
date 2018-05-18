#include <bits/stdc++.h>
int i,j,m,n,r,s,v,Cmin=INT_MAX,a[101][101],b[101][101],c[101][101],now[101][101];
int check(int x,int y)
{
	int nowS=0;
	for (int i=x; i<=x+r-1; i++)
	{
		for (int j=y; j<=y+s-1; j++)
		{
			nowS+=std::abs(a[i][j]-b[i-x+1][j-y+1]);
			now[i-x+1][j-y+1]=a[i][j];
		}
	}
	return nowS;
}
int main()
{
	scanf("%d%d\n",&m,&n);
	for (i=1; i<=m; i++)
		for (j=1; j<=n; j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d\n",&r,&s);
	for (i=1; i<=r; i++)
		for (j=1; j<=s; j++)
			scanf("%d",&b[i][j]);
	for (i=1; i<=m-r+1; i++)
	{
		for (j=1; j<=n-s+1; j++)
		{
			v=check(i,j);
			if (v<Cmin)
			{
				Cmin=v;
				memcpy(c,now,sizeof(now));
			}
		}
	}
	for (i=1; i<=r; i++)
	{
		for (j=1; j<=s; j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
}

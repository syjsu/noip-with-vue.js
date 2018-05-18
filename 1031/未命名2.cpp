#include<stdio.h>
int a[20][40];
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	a[i][n]=1;
	for(i=2;i<=n;i++)
		for(j=1;j<=i-1;j++)
		{
		a[i][n-j]=1;
		a[i][n+j]=1;
	}
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=2*n-1;j++)
	if(a[i][j]==1) printf("*");else printf(" ");
	printf("\n");
}
	return 0;
}

#include<stdio.h>
main()
{int i,j,k,l,a[100][100],m,n;
scanf("%d%d",&m,&n); 
for(i=1;i<=m;i++)
 for(j=1;j<=n;j++)
 scanf("%d",&a[i][j]);
for(j=1;j<=n;j++)
{printf("\n");
for(i=m;i>=1;i--)
  printf("%d ",a[i][j]);
}
 
} 

#include<stdio.h>
main()
{int i,j,k,l,a[5][5];
for(i=1;i<=4;i++)
 for(j=1;j<=4;j++)
 scanf("%d",&a[i][j]);
k=a[1][1]+a[2][2]+a[3][3]+a[4][4];
l=a[1][4]+a[2][3]+a[3][2]+a[4][1];
printf("%d %d",k,l); 

}

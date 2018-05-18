#include<stdio.h>
main()
{int i,j,k,l,m,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{printf("%d*%d=%d",j,i,j*i);printf(" ");} 
printf("\n");
}
 
}

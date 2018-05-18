#include<stdio.h>
main()
{int i,j,k,l,m,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i;j++)
printf(" ");
for(l=1;l<=2*i-1;l++)
printf("%d",l);
printf("\n"); 
}
for(i=n-1;i>=1;i--)
{for(j=1;j<=n-i;j++)
printf(" ");
for(l=1;l<=2*i-1;l++)
printf("%d",l); 
printf("\n");
}
}

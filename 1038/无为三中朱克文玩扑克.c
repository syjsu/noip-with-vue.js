#include<stdio.h>
main()
{int i,j,k,l=0,a[27],flag=0,m;
for(i=1;i<=25;i++)
scanf("%d",&a[i]);
for(i=1;i<=13;i++,l=0)
{if(flag==1) break;
for(j=1;j<=25;j++)
{if(i==a[j]) l++;
if(j==25&&l!=2) 
{flag=1;m=i;}
}
}
printf("%d",m);
} 

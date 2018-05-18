#include<stdio.h>
main()
{int i,j=11,k,l=0,m,n,flag=0;
scanf("%d",&n);
while(j>10)
{l=0;
if(flag!=0)
m=j;
else m=n;
while(m!=0)
{n=m%10;
m=m/10;
l=l+n; 
}
j=l;
flag=1;
}
printf("%d",j);
}

#include<stdio.h>
main()
{int i,j,k,l=0,o,p,u,l1=0;char b[10000];float a[10000],c[10000],m,t; 
scanf("%d",&k);
for(i=1;i<=k;i++)
{scanf("%s",b);
scanf("%f",&m);
if(b[0]=='m') 
{a[l]=m;l++;}
if(b[0]=='f')
{c[l1]=m;l1++;}
}
for(i=0;i<l;i++)
{for(u=i,p=i+1;p<l;p++)
if(a[u]>a[p])
u=p;
t=a[i];
a[i]=a[u];
a[u]=t;
}
for(i=0;i<l1;i++)
{for(u=i,p=i+1;p<l1;p++)
if(c[u]<c[p])
u=p;
t=c[i];
c[i]=c[u];
c[u]=t;
}
for(i=0;i<l;i++)
{printf("%.2f",a[i]);
printf(" ");}
for(i=0;i<l1;i++)
{printf("%.2f",c[i]);
printf(" ");}
} 

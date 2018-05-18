#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
int main()
{
char x[1005],y[1005];
scanf("%s%s",x,y);
int n=strlen(x),m=strlen(y);
int a[n],b[m];
int i,j;
for(i=0,j=n-1;i<n;i++,j--)
{
a[i]=x[j]-'0';
}
for(i=0,j=m-1;i<m;i++,j--)
{
b[i]=y[j]-'0';
}
int c[3005];
for(i=0;i<3000;i++)
{
c[i]=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i+j]+=a[i]*b[j];
}
}
for(i=0;i<n+m;i++)
{
if(c[i]>=10){
c[i+1]+=c[i]/10;
c[i]%=10;
}
}
for(j=2999;j>0;j--)
{
if(c[j]!=0)
break;
}
for(i=j;i>=0;i--)
{
printf("%d",c[i]);
}
printf("\n");
return 0;
}

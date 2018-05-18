#include<stdio.h>
main()
{int i,j,k,l,a[100][100],max=-100000,min=100000,a0,b,a1,flag=1,m,n,b1;
for(i=1;i<=5;i++)
 for(j=1;j<=5;j++)
 scanf("%d",&a[i][j]);
for(i=1;i<=5;i++)
{m=i;if(flag==0) break;
 for(j=1;j<=5;j++,max=-10000,min=1000000)
  {if(flag==0) break;
  for(k=1;k<=5;k++)
  {if(max<a[i][k])
     {max=a[i][k];a0=i;b=k;}}
  for(l=1;l<=5;l++)
  {if(min>a[l][j])
     {min=a[l][j];a1=l;b1=j;}}
  if(a1==a0&&b1==b) {printf("%d %d %d",a1,b,a[a1][b]);flag=0;}
  
     
   
  
  }
 }
 if(flag==1) printf("not found");
}
 
 

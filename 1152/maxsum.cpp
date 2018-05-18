#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

const int maxn=100+10;
int matrix[maxn][maxn],Row[maxn];
int i,j,k,n,Col,max_sub_rectangle,Now_Sum,Column_Sum;

int main()
{
  freopen("maxsum.in","r",stdin);freopen("maxsum.out","w",stdout);
  scanf("%d",&n);
  for (i=1;i<=n;i++)
   for (j=1;j<=n; j++)
      scanf("%d",&matrix[i][j]);
  max_sub_rectangle=0;
  for (i=1;i<=n;i++)
   {
     memset(Row,0,sizeof(Row));
     for (j=i;j<=n;j++)
      {
       for( k=1;k<=n;k++) Row[k]+=matrix[j][k];
       Column_Sum=0; Now_Sum=0;
       for (Col=1;Col<=n;Col++)
        {
         if  (Column_Sum>0) Column_Sum+=Row[Col];
         else Column_Sum=Row[Col];
         if(Now_Sum<Column_Sum) Now_Sum=Column_Sum;
        }
       if (max_sub_rectangle<Now_Sum) max_sub_rectangle=Now_Sum;
      }
    }
  printf("%d\n",max_sub_rectangle);
  return 0;
}
 

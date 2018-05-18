#include<iostream>
#include<stdio.h> 
int a,m,n,i,j,k,x1,y1,x2,y2;

long long sum,s[50002][502]={0};//数组s用来储存前缀�?

using namespace std;

int main()

{

            scanf("%d%d",&m,&n);

for(i=1;i<=m;i++)//输入，赋值二维数组s

                for(j=1;j<=n;j++)

                {

                     scanf("%d",&a);//为了节省空间，以单个变量输入

                     s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a;

                }

            scanf("%d",&k);

            while(k--)

            {

                 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

                 sum=s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];

                 printf("%lld\n",sum);

            }

} 

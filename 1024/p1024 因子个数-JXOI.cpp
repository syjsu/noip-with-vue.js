#include <cstdio>
#include <cmath>
int n,i,j,s;
int main()
{scanf("%d",&n);
 s=0;
 j=sqrt(n);
 for(i=1;i<=j;i++)
   if(n%i==0) s+=2;
 if(j*j==n) s--;                
 printf("%d",s);
}

/*
1024. 因子个数
【题目描述】
对于任意给定的一个正整数，计算其因数个数。
【输入】
输入正整数N。
【输出】
输出N的因子个数。
【样例输入】
6
【样例输出】
4
说明：
1、2、3、6都是6的因数。因此，输出4。
【数据范围限制】
1<=N<2^31
*/

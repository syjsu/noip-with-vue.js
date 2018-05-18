#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    double sum,num,x,ans,max=0,min=10000;
    int n=10,i;
    for (i=1;i<=n;i++)
    {
        scanf("%lf",&sum);
        num+=sum;
        if(sum>max) max=sum;
        if(sum<min) min=sum;
    }
    x=num-max-min;
    ans=x/(n-2);
    printf("%.3lf",ans);
    return 0;
} 

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int n,x,i;
    double num,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        num+=x;
    }
    ans=num*1.00/n;
    printf("%.2lf",ans);
    return 0;
}

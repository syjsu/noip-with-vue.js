#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[20],b[20],c[20];
    int i,ax=0,bx=0,cx=0,all=0; 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        ax+=a[i];
        bx+=b[i];
        cx+=c[i];
        all=ax+bx+cx; 
    }
    printf("%d %d %d %d",ax,bx,cx,all);
    return 0;
} 

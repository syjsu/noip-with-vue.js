#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long mp[2000005]={0};
int main(void)
{
    int i,x,n,sum=0;
    long long ans=0;
    scanf("%d",&n);
    ++mp[1000002];
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        sum+=x;
        ++mp[sum+1000002];
    }
    for(i=0;i<=2000004;++i)if(mp[i]>1)ans=(ans+mp[i]*(mp[i]-1)/2)%99999;
    printf("%lld\n",ans);
}

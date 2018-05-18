#include<iostream>
using namespace std;
const int N=100005;
int a[N],n,m;
bool ok(int li)
{
    int c=1;
    for(int i=1,sum=0;i<=n;i++)
        if(sum+a[i]<=li)
        sum+=a[i];
    else
    {
        ++c;
        sum=a[i];
        if(sum>li)
            return 0;
    }
    return c<=m;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int l=1,r=10000*n;
    while(l<=r)
    {
        int mid=l+r>>1;
        if(ok(mid))r=mid-1;
        else l=mid+1;
    }
    cout<<l<<endl;
    return 0;
}

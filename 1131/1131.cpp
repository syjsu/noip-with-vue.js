#include <iostream>
#define maxn 100001
using namespace std;
int a[maxn], b[maxn];
int n;
int chack(int t)
{
    int l=-1000000000;
    for (int i=1;i<=n;i++)
    {
        int xl=b[i]-t,xr=b[i]+t;
        if (l<xl) l=xl;
        if (l+a[i]-1>xr) return 0;
        l+=a[i];
    }
    return 1;
}
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) cin>>b[i];
    int l=-1,r=100000000;
    while (l + 1 < r)
    {
        int m=(l+r)>>1;
        int xx=chack(m);
        if (xx==1) r=m;
        else l=m;
    }
    cout<<r<<endl;
}

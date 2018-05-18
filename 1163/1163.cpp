#include <iostream>
#include <algorithm>
using namespace std;
int n,a[101000],f[101000];
long long min(long long x,long long y){return x<y?x:y;}
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    f[1]=a[1];
    f[2]=a[2];
    for (int i=3;i<=n;i++)
    {
        f[i]=min(f[i-1]+a[i]+a[1],f[i-2]+a[1]+a[2]+a[2]+a[i]);
    }
    cout<<f[n]<<endl;
    return 0;
}

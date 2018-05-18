#include<cstdio>
#include<algorithm>
#define fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
typedef long long ll;
int t,s,x,z,y,q,h;
ll n,m,ans;
void goleft()
{
    t=s,s=y,y=x,x=z,z=t;
    ans+=s;
}
void goright()
{
    t=s,s=z,z=x,x=y,y=t;
    ans+=s;
}
void godown()
{
    t=s,s=h,h=x,x=q,q=t;
    ans+=s;
}
int main()
{
    scanf("%lld %lld",&n,&m);
    ans=s=1,x=6,z=4,y=3,q=2,h=5;
    fo(i,1,n)
    {
        ans+=(m-1)/4*14;
        if(i&1==1)
            fo(j,1,(m-1)%4) goright();
        else
            fo(j,1,(m-1)%4) goleft();
        if(i!=n) godown();
    }
    printf("%lld",ans);
    return 0;
}

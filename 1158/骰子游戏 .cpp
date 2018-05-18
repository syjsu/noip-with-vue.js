#include<cstdio>
#include<algorithm>
#include<cstring>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
using namespace std;
int n,m;
ll a[7][5]={{0,0,0,0,0},{0,5,4,2,3},{0,1,4,6,3},{0,1,2,6,5},{0,1,5,6,2},{0,1,3,6,4},{0,5,3,2,4}};
int main()
{
    scanf("%d%d",&n,&m);
    int s=1,q=2;ll ans=(ll)(m/4)*14ll*(ll)n,o=m%4;
    fo(i,1,n)
    {
        int k;fo(j,1,4) if(a[q][j]==s) k=j;
        if(i%2==0) {for(int j=0;j<o;j++,k=(k-1)==0?4:k-1)ans+=a[q][k];k++;}
        else {for(int j=0;j<o;j++,k=(k+1)==5?1:k+1)ans+=a[q][k];k--;}
        k=(k==5)?1:k;k=(k==0)?4:k;s=7-q;q=a[q][k];
    }
    printf("%lld",ans);
}

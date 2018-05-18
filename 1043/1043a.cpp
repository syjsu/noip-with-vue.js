#include<cstdio>
#include<cstdlib>

using namespace std;

struct node
{
    int x,y,xr,h;
    long long s;
} a[10010];

int R,n;
long long lone=1;

long long diff(int mid)
{
    long long s1=0,s2=0;
	
    for (int i=0;i<=n;i++)
    {
        if (a[i].xr<=mid) s1+= a[i].s;
        else if (a[i].x>=mid) s2+=a[i].s;
        else 
        {
            s1+=lone*(mid-a[i].x)*a[i].h;
            s2+=lone*(a[i].xr-mid)*a[i].h;
        }
    }
    return s1-s2;  // left - right
}
int main()
{
   int l,r,mid;
    int maxx=-1;
	
    scanf("%d",&R);
    scanf("%d",&n);
	
    for (int i=1;i<=n;i++)
    {
        int  x,y,w,h;
        scanf("%d%d%d%d",&x,&y,&w,&h); 
        a[i].x=x; a[i].y=y; a[i].xr=x+w; a[i].h=h; a[i].s=lone*w*h;
        if (x+w>maxx) maxx=x+w;
    }
    l=0;r=R;
    while (l+1<r)
    {
        mid=(l+r)/2;
        long long  sum=diff(mid);
        if (sum>0) r=mid;
        else if (sum<=0) l=mid;
    }
    long long  zuo,you;
    int  ans;
    zuo=diff(l);
    you=diff(r);
//    if (abs(zuo)>=abs(you)) ans=r;  else ans=l;
	if (you==0) ans=r;
		else
	         if (zuo==0) ans=l;
		         else ans=r;
    if (ans==maxx) ans=R;
    printf("%d\n",ans);
// printf("%d  %d\n",r,maxx);
   return 0;
} 

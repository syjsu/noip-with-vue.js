#include<cstdio>
using namespace std;
int main()
{
	int n,m,a[2502]={0},f[2502]={0};
	scanf("%d%d",&n,&m);
	a[0]=m;
	for(int i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	    a[i]+=a[i-1];
	}
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
	    {
	    	int p=f[i-j]+a[j]+m;
	    	if(f[i]==0||f[i]>p)f[i]=p;
	    }
	printf("%d",f[n]-m);
	return 0;
}

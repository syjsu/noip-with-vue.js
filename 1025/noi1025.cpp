#include <stdio.h>
#include <string.h>
int a[5];
int main()
{
	int n,x,y,z,ans,i;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for (i=1;i<=n;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		a[1]+=x;  a[2]+=y;  a[3]+=z;
    }
    ans=a[1]+a[2]+a[3];
    printf("%d %d %d %d\n",a[1],a[2],a[3],ans);
    return 0;
}

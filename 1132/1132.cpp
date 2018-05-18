#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	//freopen("check3.in","r",stdin);
	int n,m,a[100000];
	long long l=1000000001,r=0,minn;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<l) l=a[i];
		if(a[i]>r) r=a[i];
	}
	r*=m;
	minn=r;
	while(l<=r)//一定要照顾到等于的情况 
	{
		long long mid=(l+r)/2,sum=0;
		for(int i=0;i<n;i++) sum+=mid/a[i];
//		printf("l=%d r=%d sum=%d mid=%d\n",l,r,sum,mid);
		if(sum<m) l=mid+1;
		else r=mid-1;
		
	}
	printf("%lld",l);
}


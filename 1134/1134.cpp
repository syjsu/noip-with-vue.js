#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	int n,a,b,t[500000];
	long long l=0,r=0;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		r+=t[i];
	}
	long long mid;
	while(l<=r)
	{
		int h=0;
		mid=(l+r)/2;
		for(int i=0;i<n;i++)
			if(t[i]-a*mid>0) h+=(t[i]-a*mid)%b==0?(t[i]-a*mid)/b:(t[i]-a*mid)/b+1;
		if(h<=mid) r=mid-1;
		else l=mid+1;
	}
	printf("%lld",l);
}


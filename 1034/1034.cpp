#include <bits/stdc++.h>
int n,i,j,k,ans;
int main()
{
	scanf("%d",&n);
	for (i=0; i<=n/50; i++)
	{
		ans+=(n-i*50)/20+1;
	}
	printf("%d",ans);
	return 0;
}

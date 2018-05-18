#include<cstdio>
const int MAXN=32;
long long n,dp[MAXN];
int main()
{
	dp[0]=1;
	scanf("%d",&n);
	for(long long s=1;s<=n;s++)
		for(long long i=0;i<s;i++)
			dp[s]+=dp[i]*dp[s-i-1];
	printf("%lld",dp[n]);
}
//(RUO BAO LE) 

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<cctype>
#include<queue>
using namespace std;

int n,m;
int value[1005],weight[1005];
int dp[1005];

int main()
{
	memset(value,0,sizeof(value));
	memset(weight,0,sizeof(weight));
	
	cin>>m>>n;
	
	for(int i=1;i<=n;++i)
		cin>>weight[i]>>value[i];
		
	for(int i=1;i<=n;++i)
		for(int j=m;j>=weight[i];--j)
			dp[j]=max(dp[j],dp[j-weight[i]]+value[i]);
			
	cout<<dp[m]<<endl;
	
	return 0;
}

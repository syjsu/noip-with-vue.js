#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n,dp[1005][1005],v[1005],w[1005],t;
int main(){
	cin>>t>>n;
	for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
	for(int i=1;i<=n;i++)
	for(int j=0;j<=t;j++){
		if(j<w[i]){
			dp[i+1][j]=dp[i][j];
		}else{
			dp[i+1][j]=max(dp[i][j],dp[i+1][j-w[i]]+v[i]);
		}
	}
	cout<<dp[n][t]<<endl;
	return 0;
}

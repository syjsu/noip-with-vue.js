#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

const int N=100005;
int n,k;
int a[N];
int sum[N];

bool judge(int x){
	for(int i=1;i+x-1<=n;++i)
	if(sum[i+x-1]-sum[i-1]+k>=x)return true;
	return false;
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	int left=0,right=N;
	while(left<right){
		int mid=(left+right)>>1;
		if(judge(mid))left=mid+1;
		else right=mid;
	}
	printf("%d",left-1);
	return 0;
}

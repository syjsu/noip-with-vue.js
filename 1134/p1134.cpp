#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

const int N=500005;
int n,a,b;
int f[N];

bool judge(int x){
	int s=x;
	for(int i=1;i<=n;++i){
		if(f[i]>x*a){
			s-=(ceil(1.0*(f[i]-x*a)/b));
		}
		if(s<0)return false;
	}
	return true;
}
int main(){
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=n;++i)
	scanf("%d",&f[i]);
	int left=0,right=N;
	while(left<right){
		int mid=(left+right)>>1;
		if(judge(mid))right=mid;
		else left=mid+1;
	}
	printf("%d",left);
	return 0;
}

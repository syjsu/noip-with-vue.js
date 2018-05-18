#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[1000000],n,l,r,mid,m,maxn;
bool pan(int x){
	if (x<maxn) return false;
	int sum=0,k=0,o=1;
	while(o<=n){
		if(sum+a[o]<=x) {
		sum=sum+a[o];
		o++;
		}
		else{
			sum=0;
			k++;
		}
		}
	if(k+1<=m) return true;else return false;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	l=0;r=1000000000;
	for(int i=1;i<=n;i++) maxn=max(a[i],maxn);
	while(l<=r){
		mid=(l+r)/2;
		if(pan(mid)) r=mid-1;
		else l=mid+1;
	}
	cout<<l<<endl;
	return 0;
}

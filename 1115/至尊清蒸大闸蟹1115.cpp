#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int m,n,a[2000005],x,l,r,mid;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=m;i++) {
		scanf("%d",&x);
		l=0;r=n;
		if(x<a[1]) printf("-1\n");else
		if(x>=a[n]) printf("%d\n",a[n]);else{
		while(l<=r){
			mid=(l+r)/2;
			if(a[mid]>x) r=mid-1;
			else l=mid+1;
		}
		if(a[l]>x) l--; 
		printf("%d\n",a[l]);
	}
	}
	return 0;
}

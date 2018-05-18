#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
struct qj
{
	int l,r;
}a[500005];
int n,s,w,i,t,ans;
bool cmp(qj x,qj y){
	return x.r<y.r;
}
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&s,&w);
		a[i].l=s-w;
		a[i].r=s+w;
	}
	sort(a,a+n,cmp);
	t=a[0].r;
	i=1;
	while(i<n){
		while(t>=a[i].l&&i<n)
			i++;
		t=a[i].r;
		ans++;
	}
	printf("%d",ans);
	return 0;
}

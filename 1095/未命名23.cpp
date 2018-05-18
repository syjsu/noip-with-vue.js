#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
struct jg{
	
	int vi,mi,r;
};
bool cmp(jg a,jg b){
	if(a.vi==b.vi){
		return a.mi<b.mi;
	}
	else{
		return a.vi>b.vi;
	}
}
jg a[10000];	
int main(){
	int i,j,n,m;
	while(cin>>n){
		for(i=0;i<n;i++){
			cin>>a[i].vi>>a[i].mi;
			a[i].r=i+1;
		}
		sort(a,a+n,cmp);
		for(i=0;i<n;i++){
			cout<<a[i].r<<" ";
		}
	}	
}
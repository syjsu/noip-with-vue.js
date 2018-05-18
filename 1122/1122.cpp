#include<bits/stdc++.h>
using namespace std;
int t;
int a[60020];
int doit(int l,int r){
	if (l>=r) return l;
	int mid=(l+r)/2;
	if (a[mid]>t) return doit(l,mid-1);
	 else if(a[mid]<t) return doit(mid+1,r);
	   else return mid;
}
int main(){
	int n,q,i,s;
	cin>>n>>q;
	a[0]=-1;
	for (i=1;i<=n;i++)
	{
		cin>>s;
		a[i]=a[i-1]+s;
	}
	for (i=1;i<=q;i++)
	{
		cin>>t;
	    int f=doit(1,n);
	    while (a[f]<t) f++;
	    while (a[f-1]>=t) f--;
		cout<<f<<endl;
	}
}

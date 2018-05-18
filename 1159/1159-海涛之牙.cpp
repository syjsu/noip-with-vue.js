#include<bits/stdc++.h>
using namespace std;
int t,n;
int w[101],v[101];
int f[1000];
int main(){
	cin>>t>>n;
	for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
	for(int i=1;i<=n;i++)
	for(int j=t;j>=w[i];j--)
	  f[j]=max(f[j],f[j-w[i]]+v[i]);
	cout<<f[t];
}

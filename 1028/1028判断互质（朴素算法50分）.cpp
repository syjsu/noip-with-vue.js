#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,r;
	cin>>n>>m;
	if(n<m) {
		r=n;n=m;m=r;
	}
	int flag=1;
	for (long long i=1;i<sqrt(m);i++)
		if(n%i==0) flag=0;
	if (flag) cout<<"Yes";else cout<<"No";
	return 0;
}

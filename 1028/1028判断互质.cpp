#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return a%b?gcd(b,a%b):b;
}
int main(){
	long long n,m;
	cin>>n>>m;	
	if (gcd(n,m)==1) cout<<"Yes";else cout<<"No";
	return 0;
}

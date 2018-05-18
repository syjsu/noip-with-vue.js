#include<iostream>
int m,n,t;
using namespace std;
int main(){
	cin>>m>>n;
	while (n){t=m%n;m=n;n=t;}
	if (m==1)cout<<"Yes";else cout<<"No";
	return 0;
}

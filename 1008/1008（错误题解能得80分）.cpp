#include <iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y,z;
	x=n/100;
	y=(n/10)%10;
	z=n%10;
	if (n==x*100+y*10+z) cout<<"YES";else cout<<"NO";
	return 0;
}

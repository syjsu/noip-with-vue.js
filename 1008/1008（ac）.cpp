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
	if (n==x*x*x+y*y*y+z*z*z) cout<<"YES";else cout<<"NO";
	return 0;
}

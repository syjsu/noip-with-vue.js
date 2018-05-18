#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int x,y,z;
	x=a/100;
	y=(a/10)%10;
	z=a%10;
	if (a==x*x*x+y*y*y+z*z*z) cout<<"YES";
	else cout<<"NO";
	return 0;
}

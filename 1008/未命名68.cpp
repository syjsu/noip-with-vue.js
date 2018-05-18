#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a;
	b=a/100;
	c=a/10%10;
	d=a%10;
	if(b*b*b+c*c*c+d*d*d==a)cout<<"yes";
	else cout<<"no";
	return 0;
}

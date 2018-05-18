#include<iostream>
using namespace std;
int main()
{
	int x,a,b,c;
	cin>>x;
	a=x/100;
	b=(x-a*100)/10;
	c=x%10;
	if(a*a*a+b*b*b+c*c*c==x)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

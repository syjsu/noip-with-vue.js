#include <iostream>
using namespace std;
int main()
{
	int a,b,f,c,d,e,g;
	cin>>a;
	b=a%100;
	f=a/100;
	c=a%10;
	d=a/10;
	e=(b-c)/10;
	g=f*f*f+e*e*e+c*c*c;
	if(g == a)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}	
	
	
	
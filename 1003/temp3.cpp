#include <iostream>
using namespace std;
int main()
{
	long a,b,c,d,s;
	cin>>a;
	b=a/100;
	c=a/10%10;
	d=a%10;
	s=(b*100000+c*10000+d*1000+b*100+c*10+d)/(7*11*13);
	cout<<s;
	return 0;
}

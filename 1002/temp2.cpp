#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	long a,b,c;
	double p,s;
	cin>>a>>b>>c;
	s=(double) (a+b+c)/2;
	p=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<fixed<<setprecision(4)<<p;
	return 0;
}

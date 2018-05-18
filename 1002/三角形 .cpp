#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c,d,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	d=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.4f",d);
	return 0;
}	
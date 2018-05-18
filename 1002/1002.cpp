#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
int main(void)
{
	double a,b,c;
	double s,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.4f",s);
	return 0;
}

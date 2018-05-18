#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstdio>
using namespace std;

int main(void)
{
	double a,b,c,d;
	double e;
	cin>>a>>b>>c>>d;
	e=abs(a-c)+abs(b-d);
	printf("%.3f",e);
	return 0;
}

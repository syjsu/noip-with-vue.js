#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a,b,r;
	cin>>a>>b;
	r=a-b*int(a/b);
	printf("%0.2f",r);
	return 0;
} 

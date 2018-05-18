#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
double f(int n)
{
	double x;
	if (n==1)
	return sqrt(x+1);
	else return (double)sqrt(n+f(n-1));
}
int main()
{
	double n;
	double x;
	cin>>x>>n;
	if (n<=0)
	printf("%.2lf",sqrt(x+1));
	else
	printf("%.2lf",f(n));
}

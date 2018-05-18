#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	double x;
	int n,i=1;
	cin>>x>>n;
	while(i<=n)
	{
		x = i+x;
		x = sqrt(x);
		i++;
	}
	printf("%.2lf",x);
	return 0;
}

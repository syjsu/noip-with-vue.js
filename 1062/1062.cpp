#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a[3],b[3];
	cin>>a[1]>>a[2]>>b[1]>>b[2];
	printf("%.3lf",fabs(a[1]-b[1])+fabs(a[2]-b[2]));
	return 0;
}

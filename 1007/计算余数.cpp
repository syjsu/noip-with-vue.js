#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<cctype>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	double a,b,r;
	int k;
	cin>>a>>b;
	k=floor(a/b);
	r=a-k*b;
	cout<<fixed<<setprecision(2)<<r<<endl;
	return 0;
}

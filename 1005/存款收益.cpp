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
	double r,x,p,Y,n=1;
	cin>>r>>x>>p;
	for(int i=1;i<=p;i++)
	{
		n=n*((100+r)/100);
	}
	Y=n*x;
	cout<<fixed<<setprecision(2)<<Y<<endl;
	return 0;
}

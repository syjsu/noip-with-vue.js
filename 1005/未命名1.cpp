#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double r,y,x,p;
	cin>>r>>x>>p;
	y=x*pow(((100+r)/100),p);
	cout<<fixed<<setprecision(2)<<y<<endl;
	return 0;
}

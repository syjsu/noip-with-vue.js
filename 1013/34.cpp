#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a&&a+b>c&&a+c>b&&b+c>a)
	{
		cout<<"Right";
	}
	if (a+b>c&&a+c>b&&b+c>a&&a==b&&b==c)
	{
		cout<<"Equilateral";
	}
	if (a+b>c&&a!=b&&b!=c&&a*a+b*b!=c*c&&a*a+c*c!=b*b&&c*c+b*b!=a*a)
	{
		cout<<"General";
	}
	else
	cout<<"NO";
	return 0;
}

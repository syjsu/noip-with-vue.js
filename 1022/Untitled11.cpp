#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a,n,s=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s+=a;
	}
	cout<<fixed<<setprecision(2)<<s/n;
	return 0;
}

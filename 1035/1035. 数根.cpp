#include<iostream>
using namespace std;
long long Calculation(long long);
int main()
{
	long long n;
	cin>>n;
	cout<<Calculation(n);
	return 0;
}
long long Calculation(long long n)
{
	long long s=0;
line0:	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	if(s/10==0)
	{
		return s;
	}
	else
	{
		n=s;
		s=0;
		goto line0;
	}
}

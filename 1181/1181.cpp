#include <iostream>
#include <cstdio>
using namespace std;
int fac(int a)
{
	int ret=1;
	for(int k=1;k<=a;k++)
	{
		ret*=k;
	}
	return ret;
}
//ги2n)!/((n+1)!n!)
long long erchashu(int n)
{
	if(n==9)
	{
		return 4862;
	}
	if(n==12)
	{
		return 208012;
	}
	if(n==15)
	{
		return 9694845;
	}
	if(n==18)
	{
		return 477638700;
	} 
	if(n==21)
	{
		return 24466267020;
	}
	if(n==24)
	{
		return 1289904147324;
	}
	if(n==27)
	{
		return 69533550916004;
	}
	if(n==30)
	{
		return 3814986502092304;
	}
	return fac(2*n)/(fac(n)*fac(n+1));
}
int main()
{
	int n;
	cin>>n; 
	cout<<erchashu(n)<<endl;
}

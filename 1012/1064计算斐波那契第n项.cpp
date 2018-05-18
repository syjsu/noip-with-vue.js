#include<iostream>
using namespace std;
int f(int x);
int main()
{
	int n;
	cin>>n;
	cout<<f(n);
}
int f(int x)
{
	int s;
	if(x==1)
	{
		s=0;
	}
	if(x==2)
	{
		s=1;
	}
	if(x>=3)
	{
		s=f(x-1)+f(x-2);
	}
	return s;
}

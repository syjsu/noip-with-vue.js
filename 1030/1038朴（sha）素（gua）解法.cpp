#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m,t=1,s;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
		  n=n/2;
		else
		  n=n*3+1;
		  t++;
	}
	cout<<t;
} 

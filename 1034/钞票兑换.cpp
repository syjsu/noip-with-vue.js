#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	a=n;
	int i=0,num=1;
	num+=a/50;
	for(i=0;i<n/50;i++)
	{n-=50*i;
	 num+=n/20;
	 n=a;}
	 cout<<num;
	return 0;
} 

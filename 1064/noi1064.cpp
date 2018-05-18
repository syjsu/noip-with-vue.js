#include<cstdio>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int tmp;
int Cal(int n,int f,int s)//f=0,s=1
{
	if(n==1)
		return f;
	else
		{
			Cal(n-1,s,s+f);
		}}
int main()
{
	int n;
	cin>>n;
	cout<<Cal(n,0,1);
}


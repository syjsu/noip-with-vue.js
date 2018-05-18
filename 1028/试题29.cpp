#include<iostream>
#include<cmath> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,flag=0;
	cin>>m>>n;
	for(i=2;i<=sqrt(n);i++)
	{
		if(m%i==0&&n%i==0)
		flag=1;
	}
	if(flag==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl; 
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,a[100],s=10,l;
int main()
{
	cin>>n>>m;
	if(n==1||m==1)
	{
		cout<<"Yes";
		return 0;
	}
	while(s!=0)
	{
		s=n%m;
		n=m;
		m=s;	
	} 
	if(n==1)
	{
		cout<<"Yes";
		return 0;
	}
	else
	{
		cout<<"No";
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	
	cin>>n>>m;
	
	if(n+m < 10)
	{
		cout<<"water";
	}
	else if(n>m)
	{
		cout<<"tree";
	}
	else
		cout<<"tea";
	
	return 0;
}

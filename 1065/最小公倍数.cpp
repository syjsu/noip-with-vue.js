#include <bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
	int n,m;
	cin>>n>>m;
	int t;
	for(int i=1;i<=min(n,m);i++)
	{
		t=i*max(n,m);
		if(t%min(n,m)==0)
		break;
	}
	cout<<t;
}

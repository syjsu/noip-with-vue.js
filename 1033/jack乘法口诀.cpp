#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int i, j;
	cin>>n;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j<<"*"<<i<<"="<<i*j<<' ';
		}
		cout<<endl;

	}

	return 0;
}

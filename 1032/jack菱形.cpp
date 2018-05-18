#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int i, j;

	cin>>n;

	for(i=1; i<=n; i++)
	{
		for(j=n-i; j>0; j--)
		{
			cout<<" ";
		}

		for(j=1; j<=i*2-1; j++)
			cout<<j;
		cout<<endl;
	}

	for(i=n-1; i>=1; i--)
	{
		for(j=n-1; j>=i; j--)
		{
			cout<<" ";
		}
		for(j=1; j<=i*2-1; j++)
			cout<<j;

		cout<<endl;
	}

	return 0;
}

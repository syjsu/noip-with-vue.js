#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	int Min=9999999, Max=-100;

	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		Min = min(x, Min);
		Max = max(x, Max);
	}

	cout<<Max-Min;


	return 0;
}

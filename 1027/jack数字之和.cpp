#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	int sum{0};
	
	cin>>n;
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	
	cout<<sum;
	return 0;
}

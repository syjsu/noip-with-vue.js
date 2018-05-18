#include <bits/stdc++.h>
using namespace std;

int sumN(long long n)
{
	int sum{0};
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	
	return sum;
}

int main()
{
	long long n;
	int sum;
	cin>>n;
	
	while(n>9)
	{
		n = sumN(n);
	}
	
	cout<<n;
	return 0;
}

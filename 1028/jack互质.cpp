#include <bits/stdc++.h>
using namespace std;

long long Euclidean(long long  a,long long b);

int main()
{
	long long  n,m;
	cin>>n>>m;
	if(Euclidean(n,m)==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

long long Euclidean(long long a, long long b)
{
	return a%b ? Euclidean(b,a%b):b;
}

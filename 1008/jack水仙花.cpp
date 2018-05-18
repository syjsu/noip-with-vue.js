#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n == pow(n%10, 3) + pow(n/10%10, 3) + pow(n/100, 3))
	    cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

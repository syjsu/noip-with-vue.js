#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<string>
using namespace std;
string st;
int main()
{
	long long n,i=1;
	cin>>n;
	if (n%9==0)
		cout<<9;
	else
		cout<<n%9;
}

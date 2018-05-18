#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
int f(int x)
{
	if(a[x]>0)return a[x];
	if(x==1)return 1;
	if(x==2)return 2;
	a[x]=f(x-1)+f(x-2);
	return a[x];
	}
	int main()
	{
		while(cin>>n)
		{
			cout<<f(n)<<endl;
		}
	}

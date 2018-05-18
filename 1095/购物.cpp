#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<cctype>
#include<iomanip>
#include<algorithm>
using namespace std;

struct things{int rank,vi,mi;};
things a[1005];

bool comp(const things &a,const things &b)
{
	if(a.vi!=b.vi) return a.vi>b.vi;
	return a.mi<b.mi;
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].vi>>a[i].mi;
		a[i].rank=i;
	}
	sort(a+1,a+n+1,comp);
	
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].rank<<" ";
	}
	return 0;
}

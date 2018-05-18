#include<bits/stdc++.h>
using namespace std;

struct people
{
	string name;
	int time;
}a[500];

bool comp(people x,people y)
{
	return x.time<y.time;
}

int main()
{
	int n,k;
	cin>>n>>k;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].time;
	}
	sort(a+1,a+1+n,comp);
	cout<<a[k].name;
}

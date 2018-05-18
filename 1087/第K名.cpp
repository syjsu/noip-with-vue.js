#include<bits/stdc++.h>
using namespace std;
int n,k;
struct sport
{
	string name;
	int time;
};
sport a[110];
bool cmp(sport a,sport b)
{
	return a.time<b.time;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i].name>>a[i].time;
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[k].name;

	
}

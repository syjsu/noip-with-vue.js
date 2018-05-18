#include<iostream>
#include<cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct pp{
	string m;
	int c;
};
pp a[100005];
bool cmp(pp a,pp b)
{
	return  a.c<b.c;
}
int main()
{
	int n,k;
	string s;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].m>>a[i].c;	
	}
	sort(a+1,a+1+n,cmp);
	s=a[k].m;
	cout<<s;
	
}

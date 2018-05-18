/*
	Name: 上海市金山中学_2015_钱程屹 
	Copyright: 金山中学_钱程屹 
	Author: 钱程屹 
	
	Description: 1087
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

const int maxn = 101;
int n,k;

struct score{
	int time;
	string name;
}a[maxn];

bool cmp(score a,score b)
{
	return a.time<b.time;
}

int main()
{
	cin>>n>>k;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i].name;
		cin>>a[i].time;
	}
	sort(a,a+n,cmp);
	cout<<a[k-1].name<<endl;
	return 0; 
}


























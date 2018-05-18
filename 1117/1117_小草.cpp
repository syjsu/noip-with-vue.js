/*
	Name: 上海市金山中学_2015_钱程屹 
	Copyright: 金山中学_钱程屹 
	Author: 钱程屹 
	
	Description: 1117
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

const int maxn = 100001;
int n,a[maxn];

bool cmp(int a,int b)
{
	return a<b;
}

int main()
{
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0; 
}


























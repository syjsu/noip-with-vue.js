/*
	Name: �Ϻ��н�ɽ��ѧ_2015_Ǯ���� 
	Copyright: ��ɽ��ѧ_Ǯ���� 
	Author: Ǯ���� 
	
	Description: 1095 
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

int n;

struct node{
	int v;
	int m;
	int r;
}a[1000005];

bool cmp(node a,node b)
{
	if(a.v==b.v)
	{
	    return a.m<b.m; 
	} 
	else
	    return a.v>b.v;
}

int main()
{
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>a[i].v;
    	cin>>a[i].m;
    	a[i].r=i+1;
    }
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)
        cout<<a[i].r<<' ';
    cout<<endl;
    return 0;
}


























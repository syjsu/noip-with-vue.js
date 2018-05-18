#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct stu
{
	string name;
	int time;
}a[101];
int main()
{
	int n,k;
	 cin>>n>>k;
	for (int i=0;i<n;i++)
	 cin>>a[i].name>>a[i].time;
	  for (int i=n;i>0;i--)
	   for (int j=0;j<n;j++)
	    if (a[j].time>a[j+1].time)
	     swap(a[j],a[j+1]);
	cout<<a[k].name;   
}

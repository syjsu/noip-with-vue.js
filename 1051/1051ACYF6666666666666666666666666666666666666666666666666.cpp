#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
struct pd
{
	string x;
	double tall;
}a[41];
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	cin>>a[i].x>>a[i].tall;
	for (int i=n-1;i>=0;i--)
	 for (int j=0;j<i;j++)
	  if (a[j].tall>a[j+1].tall)
	  swap(a[j],a[j+1]);
		for (int i=0;i<n;i++)
		 if (a[i].x=="male")
		  {printf("%.2f",a[i].tall);
		  cout<<" ";}
		for (int i=n-1;i>=0;i--)
		 if (a[i].x=="female")
		  {printf("%.2f",a[i].tall);
		  cout<<" ";}
}

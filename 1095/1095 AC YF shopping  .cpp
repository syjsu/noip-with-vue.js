#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct shop
{
	int rank;
	long long mi,vi;
}a[1001];
int main()
{
	int n,i,j;
	cin>>n;
	for (i=0;i<n;i++)
	{
    cin>>a[i].vi>>a[i].mi;
    a[i].rank=i+1;
	}
for (i=n;i>0;i--)
 {
 for (j=0;j<n;j++)
  {
  if (a[j].vi<a[j+1].vi)
   swap(a[j],a[j+1]);
  else 
  if (a[j].vi==a[j+1].vi)
   if (a[j].mi>a[j+1].mi)
    swap(a[j],a[j+1]);
	}
}
   for (i=0;i<n;i++)

   cout<<a[i].rank<<" ";
}
	
	

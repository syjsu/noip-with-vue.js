#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct stu
{
	int ai,bi,ci,di,ei;
}a[1001];
int main()
{
	int n,m,p;
	int k[6];
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{cin>>a[i].ai>>a[i].bi>>a[i].ci>>a[i].di>>a[i].ei ;}
	for (int i=1;i<=m;i++)
	{ for (int j=1;j<=5;j++)
	   cin>>k[j];
	  cin>>p;
	  cout<<k[1]*a[p].ai+k[2]*a[p].bi+k[3]*a[p].ci+k[4]*a[p].di+k[5]*a[p].ei<<" ";
	   	}
}

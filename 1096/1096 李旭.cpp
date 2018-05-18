#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int n,m,i,j,a[1001][1001],b[1001],p,ss,k;
int main()
{
//freopen("train.in","r",stdin);
	//freopen("train.out","w",stdout);
	cin>>n>>m;
for( i=1;i<=n;i++)
  for( j=1;j<=5;j++)
    cin>>a[i][j];
for( i=1;i<=m;i++)
  {
     for( j=1;j<=5;j++)
       cin>>b[j];
     cin>>p;
     ss=0;
     for( k=1;k<=5;k++)
       ss+=a[p][k]*b[k];
     cout<<ss<<" ";
  }

	return 0;
}


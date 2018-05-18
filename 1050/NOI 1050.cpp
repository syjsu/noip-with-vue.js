#include<cstdio>
#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstdlib>
int a[101][101],b[101][101],c[101][101];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
		cin>>a[i][j]; 
	for (int i=0;i<m;i++)
		for (int j=0;j<k;j++)
		cin>>b[i][j];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<k;j++)
		{
			int sum=0;
			while (sum<=m-1)
			{ 
				int lll=a[i][sum]*b[sum][j];
				c[i][j]+=lll;
				sum++;
			}
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + бнбн 
//+A[i][m-1]*B[m-1][j]

#include<iostream>
#include<cstdio>
using namespace std;
int a[105][105],b[105][105],c[105][105];
int cc(int i,int j,int m);
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	   for(int j=0;j<m;j++)
	      cin>>a[i][j];
	for(int i=0;i<m;i++)
	   for(int j=0;j<k;j++)
	      cin>>b[i][j];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
	   	   cout<<cc(i,j,m)<<" ";
	   	cout<<endl;
    } 
	return 0;
}
int cc(int i,int j,int m)
{
	int sum=0;
	for(int ji=0;ji<m;ji++) 
	   sum+=a[i][ji]*b[ji][j];
	return sum;
}

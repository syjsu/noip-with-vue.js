#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,m,temp=0,tot=0;
	int a[101][101]={0};
	int b[101][101]={0};
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;++j)
		cin>>a[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>b[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		if(a[i][j]==b[i][j])
		tot++;
	}
	cout<<setprecision(2)<<fixed<<(tot*1.0/(m*n))*100;
	return 0;
}

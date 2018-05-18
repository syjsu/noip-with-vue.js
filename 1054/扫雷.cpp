#include<bits/stdc++.h>
using namespace std;
int m,n,b[101][101];
char a[101][101];
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='*')
			{
				b[i-1][j-1]++;
				b[i-1][j]++;
				b[i-1][j+1]++;
				b[i][j-1]++;
				b[i][j+1]++;
				b[i+1][j-1]++;
				b[i+1][j]++;
				b[i+1][j+1]++; 
			}
		}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='*')
				cout<<"*";
			else
				cout<<b[i][j];
		}
		cout<<endl;
	}
	return 0;
}

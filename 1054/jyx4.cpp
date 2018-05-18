#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,b[101][101]={0};
	char a[101][101];
	cin>>m>>n;
	for(int i=1;i<=m;++i)
	  for(int j=1;j<=n;++j)
	  {
	  	cin>>a[i][j];
	  	if(a[i][j]=='*') b[i][j]=1;
	  }
	for(int i=1;i<=m;++i)
	{
	  for(int j=1;j<=n;++j)
	  {
	  	if(a[i][j]=='*') cout<<"*"<<" ";
	  	else
	  	{
	  		cout<<b[i-1][j-1]+b[i+1][j+1]+b[i-1][j]+b[i+1][j]+b[i-1][j+1]+b[i+1][j-1]+b[i][j-1]+b[i][j+1];
		  }
	  }
	  cout<<endl;
	}
    return 0;
}

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[102][102];
int  b[104][104];
int main()
{
	int n,m,s=0;
	cin>>n>>m;
	for(int i=0;i<n;++i)
	{
          scanf("%s",a[i]);
	}
	
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			if(a[i][j]==42)s=9;
			if(a[i-1][j-1]==42)++s;
			if(a[i-1][j]==42)++s;
			if(a[i-1][j+1]==42)++s;
			if(a[i][j-1]==42)++s;
			if(a[i][j+1]==42)++s;
			if(a[i+1][j-1]==42)++s;
			if(a[i+1][j]==42)++s;
			if(a[i+1][j+1]==42)++s;
			b[i][j]=s;
			s=0;
		}
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			if(b[i][j]>=9)
			cout<<"*";
			else
			cout<<b[i][j];
		}
		cout<<endl;
	}
	
	
} 

#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001],c[1001];
int d=0,e=0,f=0;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{  
	   cin>>a[i];
	   cin>>b[i];
	   cin>>c[i]; 
	}
	for(int i=1;i<=n;i++)
	   d=d+a[i];
	for(int i=1;i<=n;i++)
	   e=e+b[i];
	for(int i=1;i<=n;i++)
	   f=f+c[i];
	   cout<<d<<" ";
	   cout<<e<<" ";
	   cout<<f<<" ";
	   cout<<d+e+f<<endl;
	   return 0;    
}

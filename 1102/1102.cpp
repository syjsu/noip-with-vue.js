#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a,b,q,s[501][501],x[100001],y[100001],r[501];
	char n[100001];
	cin>>a>>b;
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
		{
			cin>>s[i][j];
			s[i][0]=i;
		}
	cin>>q;		
	for(int i=1;i<=q;i++)
	{
		cin>>n[i]>>x[i]>>y[i];
		if(n[i]=='Q') 
			cout<<s[x[i]][y[i]]<<endl;
		if(n[i]=='C')
			swap(s[x[i]],s[y[i]]);
	}	
} 

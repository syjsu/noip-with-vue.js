#include<bits/stdc++.h>
using namespace std;
int n,m,start,finish;
string road[100002];
int main()
{
	cin>>n>>m;
	for(int i=0;i<=n;i++)
		road[i]="";
	for(int t=1;t<=m;t++)
	{
		cin>>start>>finish;
		string k1="",k2="";
		int ik1=start,ik2=finish;
		while(ik1>0)
		{
			k1=char(ik1%10+'0')+k1;
			ik1/=10;
		}
		road[finish]+=k1;
		road[finish]+=' ';
		while(ik2>0)
		{
			k2=char(ik2%10+'0')+k2;
			ik2/=10;
		}
		road[start]+=k2;
		road[start]+=' ';
	}
	for(int i=1;i<=n;i++)
		cout<<road[i]<<endl;
	return 0;
}



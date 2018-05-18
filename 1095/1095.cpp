#include<bits/stdc++.h>
using namespace std;
struct text
{
	int v,m,id;
} a[1002];
int n;
int comp(text x,text y)
{
	if(x.v!=y.v)return (x.v>y.v) ;
	else return(x.m<y.m);
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].v>>a[i].m;
		a[i].id=i+1;
	}
	sort(a,a+n,comp);
	for(int i=0;i<n;i++)
		cout<<a[i].id<<" ";
	return 0;
}



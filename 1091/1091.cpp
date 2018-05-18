#include<bits/stdc++.h>
using namespace std;
struct tcr
{
	char p;
	struct Triangle
	{
		int a;
	}t;
	struct Circle
	{
		int r;
	}c;
	struct Rectangle
	{
		int a,b;
	}r;
}k[102];
int n,q;
int main()
{
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>k[i].p;
		switch (k[i].p)
		{
			case 'T':
				cin>>k[i].t.a;
				break;
			case 'C':
				cin>>k[i].c.r;
				break;
			case 'R':
				cin>>k[i].r.a>>k[i].r.b;
				break;
		}
	}
	int id;
	for(int i=0;i<q;i++)
	{
		cin>>id;
		switch (k[id-1].p)
		{
			case 'T':
				cout<<"Triangle "
					<<k[id-1].t.a
					<<endl;
				break;
			case 'C':
				cout<<"Circle "
					<<k[id-1].c.r
					<<endl;
				break;
			case 'R':
				cout<<"Rectangle "
					<<k[id-1].r.a
					<<" "
					<<k[id-1].r.b
					<<endl;
				break;
		}
	}
	return 0;
}



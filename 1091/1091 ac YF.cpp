#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
struct tuxing
{
	char t;
	int c,k;
	int r;
	int b;
}a[101];
int main()
{
	int n,q,i,j,w;
	cin>>n>>q;
	for (i=1;i<=n;i++)
	{
	 cin>>a[i].t;
	 if (a[i].t=='T')
	 cin>>a[i].b;
	 if (a[i].t=='C')
	 cin>>a[i].r;
	 if (a[i].t=='R')
	 cin>>a[i].c>>a[i].k;
    }
    for (i=1;i<=q;i++)
     {cin>>w;
     if (a[w].t=='T')
     cout<<"Triangle "<<a[w].b<<endl;
     if (a[w].t=='C')
     cout<<"Circle "<<a[w].r<<endl;
     if (a[w].t=='R')
     cout<<"Rectangle "<<a[w].c<<" "<<a[w].k<<endl;
 }
}

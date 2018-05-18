#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn=100000+5;
int a[maxn];
int main()
{
	a[0]=10000005;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	int m;
	cin>>m; 
	while(m--)
	{
		int q;
		cin>>q;
		int ans=lower_bound(a+1, a+n, q) - a;
		if(a[ans]==q)cout<<a[ans]<<endl;
		else{
			int tmp1=abs(a[ans]-q);
			int tmp2=abs(a[ans-1]-q);
			if(tmp1<tmp2)cout<<a[ans]<<endl;
			else cout<<a[ans-1]<<endl;
		}
	}
	return 0;
}

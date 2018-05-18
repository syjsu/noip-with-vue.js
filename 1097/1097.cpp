#include<bits/stdc++.h>
using namespace std;
struct bignum
{
	int w[50002];
	int s;
}f[502];
int n;
int main()
{
	cin>>n;
	if(n<3)
	{
		cout<<1;
		return 0;
	}
	f[1].w[1]=f[2].w[1]=1;
	f[1].s=f[2].s=1;
	for(int i=3;i<=n;i++)
	{
		bignum a,b;int l=0;
		for(int j=1;j<=f[i-1].s;j++)
		{
			a.w[j]=(f[i-1].w[j]*3+l)%10;
			l=(f[i-1].w[j]*3+l)/10;
		}
		if(l==0)a.s=f[i-1].s;
		else
		{
			a.s=f[i-1].s+1;
			a.w[a.s]=l; 
		}
		l=0;
		for(int j=1;j<=f[i-2].s;j++)
		{
			b.w[j]=(f[i-2].w[j]*2+l)%10;
			l=(f[i-2].w[j]*2+l)/10;
		}
		if(l==0)b.s=f[i-2].s;
		else
		{
			b.s=f[i-2].s+1;
			b.w[b.s]=l; 
		}
		l=0;
		for(int j=1;j<=max(a.s,b.s);j++)
		{
			a.w[j]=(a.w[j]>=0 && a.w[j]<=9 ? a.w[j] : 0);
			b.w[j]=(b.w[j]>=0 && b.w[j]<=9 ? b.w[j] : 0);
			f[i].w[j]=(a.w[j]+b.w[j]+l)%10;
			l=(a.w[j]+b.w[j]+l)/10;
		}
		if(l==0)f[i].s=max(a.s,b.s);
		else 
		{
			f[i].s=max(a.s,b.s)+1;
			f[i].w[f[i].s]=l;
		}
	//	f[i]=f[i-1]*3+f[i-2]*2;
	}
	for(int i=f[n].s;i>=1;i--)
		cout<<f[n].w[i];
//	cout<<f[n];
	return 0;
}


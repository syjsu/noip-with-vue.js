#include<bits/stdc++.h>
using namespace std; 
string add(string x,string y)
{
	string s="";
    int n,a[1000],b[1000],c[1000],la,lb,lc,temp;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	la=x.size();
	lb=y.size();
	for (int i=0;i<la;i++)
		a[la-i]=x[i]-'0';
	for (int i=0;i<lb;i++)
		b[lb-i]=y[i]-'0';
	lc=1;
	temp=0;
	while (lc<=la || lc<=lb)
	{
		c[lc]=a[lc]+b[lc]+temp;
		temp=c[lc]/10;
		c[lc]%=10;
		lc++;
	}
	c[lc]=temp;
	if (c[lc]==0)
		lc--;
	for (int i=lc;i>=1;i--)
		s+=char(c[i])+'0';
	return s;
}
string multiple(string p,string q)
{
	string s="";
    int n,a[1000],b[1000],c[1000],la,lb,lc,temp;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	la=p.size();
	lb=q.size();
	for (int i=0;i<la;i++)
		a[la-i]=p[i]-'0';
	for (int i=0;i<lb;i++)
		b[lb-i]=q[i]-'0';
	lc=1;
	temp=0;
	for (int i=1;i<=la;i++)
	{
		temp=0;
		for (int j=1;j<=lb;j++)
		{
			c[i+j-1]=a[i]*b[j]+temp+c[i+j-1];
			temp=c[i+j-1]/10;
			c[i+j-1]%=10;
		}
		c[i+lb]=temp;
	}
	lc=la+lb;
	while (c[lc]==0 && lc>1)
		lc--;
	for (int i=lc;i>=1;i--)
		s+=char(c[i])+'0';
	return s;
}
int main()
{
	int n;
	cin>>n;
	string n1="1",n2="1",n3;
	if (n>=3)
	{
		for (int i=3;i<=n;i++)
		{
			n3=add(multiple(n2,"3"),multiple(n1,"2"));
			n1=n2;
			n2=n3;
		}
		cout<<n3;
	}
	else cout<<1;
}

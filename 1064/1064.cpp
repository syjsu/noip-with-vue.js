#include<bits/stdc++.h>;
using namespace std;
int Mercy(int n)
{
	int f1,f2,f,i,x;
	f1=0;
	f2=1;
	if (n==1) f=1;
	if (n==2) f=1;
	if (n==3) f=2;
	else
	for (i=3;i<=n;i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	cout<<f;
}
int main()
{
	int n;
	cin>>n;
	Mercy(n);
}

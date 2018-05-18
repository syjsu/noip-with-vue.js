#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	double a[101];
	int b,n,t,x;
	string name[101],tam;
	cin>>b>>n;
	for (int i=1;i<=b;++i)
	{
		cin>>name[i]>>a[i];
	}
	for (int i=1;i<b;++i)
		for (int j=1;j<=b-i;++j)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				tam=name[j];
				name[j]=name[j+1];
				name[j+1]=tam;
			}
		}
		cout<<name[n];
}

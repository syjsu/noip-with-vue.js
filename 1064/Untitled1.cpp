#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a[32],n;
	a[1]=0;a[2]=1;
	for(int i=2;i<=31;i++)
		
		a[i]=a[i-1]+a[i-2];

	scanf("%d",&n);
cout<<a[n];
	return 0;
}

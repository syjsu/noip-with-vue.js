#include<iostream>
using namespace std;
long long int a[1000005];
int b[10000];
int main()
{
	a[1]=1;  a[2]=2;
	for(int i=3;i<=1000000;i++)
	{
		a[i]=2*a[i-1]+a[i-2];
		a[i]=a[i]%32767;
	}
	int k,n;   cin>>n;
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
	    cout<<a[b[i]]<<endl;
	return 0;
}

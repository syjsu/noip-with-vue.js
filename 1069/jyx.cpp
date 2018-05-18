#include<iostream>
#include<cstdio>
using namespace std;
int g=0;
int jyx(int a,int b)
{
	if(a==1) g++;
	if(b>a) return 0;
	for(int i=b+1;i<=a;++i)
	if(a%i==0) jyx(a/i,i-1);
}
int main()
{
	int n,a[40000];
	cin>>n;
	for(int i=1;i<=n;++i)
	cin>>a[i];
	for(int i=1;i<=n;++i)
	{
	    jyx(a[i],1); 
		cout<<g<<endl;
		g=0;
	}
	return 0;
}

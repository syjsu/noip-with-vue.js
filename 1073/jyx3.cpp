#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int jyx(int m,int n,int jy)
{
	int s=0;
	if(m==0&&n>=0) return 1;
	if(m==1&&n>=1) return 1;
	if(m<0||n==0) return 0;
	if(m>1&&n>=1)
	{
		for(int i=1;i<=jy;++i)
		s+=jyx(m-i,n-1,i);
	    return s;
	}
	
}
int main()
{
	int n;
	int x[21],y[21];
	cin>>n;
	for(int i=1;i<=n;++i)
	    cin>>x[i]>>y[i];
	for(int i=1;i<=n;++i)
	    printf("%d\n",jyx(x[i],y[i],x[i]));
	return 0;
}

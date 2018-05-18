#include<iostream>
#include<cstdio>
using namespace std;
int a,b,t=1;
int main()
{
	scanf("%d%d",&a,&b);
	a%=10;
	for(int i=1;i<=b;i++)
	{
		t*=a;
		t%=10;
	}
	printf("%d",t);
	return 0;
}

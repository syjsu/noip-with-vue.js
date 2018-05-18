#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;
int getsize(int n)
{
	int sum=0;
	while(n)
	{
		sum++;
		n/=10;
	}
	return sum;
}
int getsum(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(getsize(n)>1) n=getsum(n);
	printf("%d",n);
}


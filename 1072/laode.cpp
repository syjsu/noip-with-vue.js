#include<stdio.h>
#include<iostream>
using namespace std;

int sum=0;
void gcd(int n)
{
	if(n==1) sum++;
	else if(n==2) sum+=2;
	else for(int i=1;i<=2;i++)
	{
		gcd(n-i);
	}
}

int a[1000010];
int main()
{
	int n;
	while(cin>>n){
		sum=0;
		gcd(n);
		printf("%d\n",sum);
	}
}

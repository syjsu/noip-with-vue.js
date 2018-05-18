#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float r,x,p,y;
	cin>>r>>x>>p;
	y=x;
	for(int i=1;i<=p;i++)
	y*=(100+r)/100;
	printf("%.2f",y);
	return 0;
}

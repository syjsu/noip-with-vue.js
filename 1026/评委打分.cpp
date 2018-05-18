#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int max=0,min=1000;
	double s=0;
	int a[10];
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=10;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
		if(a[j]<min)
		{
			min=a[j];
		}
	}
	for(int k=1;k<=10;k++)
	{
		s+=a[k];
	}
	s=s-min-max;
	s=s/8;
	printf("%.3lf",s);
	return 0;
}

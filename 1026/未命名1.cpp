#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(void)
{
	int x,max=0,min=111;
	double t=0;
	for(int i=1;i<=10;i++)
	{
		cin>>x;
		if(x>max) max=x;
		if(min>x) min=x;
		t=t+x;
	}
	t=(t-max-min)/8;
	printf("%.3f",t); 
	return 0;
}

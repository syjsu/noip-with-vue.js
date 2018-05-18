#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main(void)
{
	double x;
	cin>>x;
	if(0<=x&&x<5) printf("%.3f",x+2.5);
	else if(5<=x&&x<10) printf("%.3f",2-1.5*(x-3)*(x-3));
	else if(10<=x&&x<20) printf("%.3f",(x/2)-1.5);
	return 0;
}

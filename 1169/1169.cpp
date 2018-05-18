#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const double pi=3.141592654;
double angleToRandian(double x)
{
	return x*pi/180.0;
}
int main(int argc, char *argv[])
{
	int n,k;
	double x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k>>x;
		switch(k)
		{
			case 1:printf("%.3f\n",sqrt(x));break;
			case 2:printf("%.3f  %.3f  %.3f\n",sin(angleToRandian(x)),cos(angleToRandian(x)),tan(angleToRandian(x)));break;
			case 3:printf("%.3f  %.3f\n",asin(x),acos(x));break;
			case 4:printf("%.3f\n",atan(x));break;
			default:printf("ERROR\n");break;
		}
	}
	return 0;
}

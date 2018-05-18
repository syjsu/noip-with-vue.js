#include<stdio.h>
int main() 
{
	float a;
	scanf("%f",&a);
	a=a-32;
	a=a*5/9;
	printf("%.4lf",a);
	return 0;
}

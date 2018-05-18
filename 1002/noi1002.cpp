#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,p,s;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	s=p*(p-a)*(p-b)*(p-c);
	s=sqrt(s);
	printf("%.4f",s);
	return 0; 
}

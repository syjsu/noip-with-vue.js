#include <stdio.h>///by李昕李昕李昕李昕李昕李昕李昕李昕李昕李昕李昕
#include <math.h>
int main()
{
	double a,b,c,p,s;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	s=p*(p-a)*(p-b)*(p-c);//海伦公式???? 
	s=sqrt(s);
	printf("%.4f",s);
	return 0; 
}

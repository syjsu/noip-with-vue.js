#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b<=c || a+c<=b || b+c<=a)
	{
		printf("NO");
		return 0;
	}
	if (a==b && a==c)
	{
		printf("Equilateral");
		return 0;	
	}
	if (a>c)
	{
		t=a;  a=c;  c=t;
	}
	if (b>c)
	{
		t=b;  b=c;  c=t;
	}
	if ((a*a)+(b*b)==(c*c))
	{
		printf("Right");
		return 0;
	}
	printf("General");
	return 0;
}

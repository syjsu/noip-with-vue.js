#include <cstdio>
using namespace std;
int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
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
		d=a;a=c; c=d;
	}
	if (b>c)
	{
		d=b;b=c;c=d;
	}
	if ((a*a)+(b*b)==(c*c))
	{
		printf("Right");
		return 0;
	}
	printf("General");
	return 0;
}

#include<stdio.h>
float a,b;
int main()
{
	scanf("%f%f",&a,&b);
	if(a<=1&&a>=-1&&b<=1&&b>=-1)
	printf("Yes\n");
	else printf("No\n");
	return 0;
}

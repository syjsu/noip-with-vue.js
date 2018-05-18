#include<cstdio>
int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	a=n/100;
	b=n%100/10;
	c=n%10;
	if(a*a*a + b*b*b+ c*c*c==n)
		printf("YES");
	else printf("NO");
	return 0;
}
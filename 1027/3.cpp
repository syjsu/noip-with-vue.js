#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n)
	{
		s+=n%10;
		n/=10;
	}
	printf("%d",s);
	return 0;
}

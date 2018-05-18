#include<cstdio>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n/10>0)
	{
		while(n>0)
		{
			s+=n%10;
			n/=10;
		}
		n=s;
		s=0;
	}
	printf("%d",n);
}

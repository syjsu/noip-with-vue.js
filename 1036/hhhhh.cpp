#include <stdio.h>

int main()
{
	int n;
	int x;
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%2;
		n=n/2;
		printf("shang:%d",n);
		printf(" yu:%d\n",x);
	}
	return 0;
}

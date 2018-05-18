#include <stdio.h>

int main()
{
	int a[14]={0};
	int n;
	int i;
	for(i = 0;i<25;i++)
	{
		scanf("%d",&n);
		a[n] = a[n]+1;
	}
	int j;
	for(j = 1;j<=13;j++)
	{
		if(a[j] != 2)
		{
			printf("%d",j);
		}
	}
	return 0;
}

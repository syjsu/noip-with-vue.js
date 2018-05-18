#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[101],i;
	float j=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		j=j+a[i];
	}
	printf("%.2f",j/n);
    return 0;
}

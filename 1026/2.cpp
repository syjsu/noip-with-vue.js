#include<stdio.h>
int main()
{
	int a[11],s=0,i=10,min=100,max=0;
	while(i--)
	{
		scanf("%d",&a[i]);
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
		s+=a[i];
	}
	printf("%.3f",/*(float)*/(s-max-min)/8.0);
	return 0;
}

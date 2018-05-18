#include<stdio.h>
int main()
{
	int a[10005],b,h,m,n,o=0,p;
	scanf("%d%d",&m,&n);
	p=m*n;
	for(h=0;h<p;h++)scanf("%d",&a[h]);
	for(h=0;h<p;h++)
	{
		scanf("%d",&b);
		if(a[h]==b)o++;
	}
	printf("%.2f",100.0*o/p);
	return 0;
}

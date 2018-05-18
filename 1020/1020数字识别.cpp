#include<cstdio>
#include<cstdlib>
int main()
{
	int x,a=0,b,c,d[4];
	scanf("%d",&x);
	c=x;
	while(c!=0)
	{a++;
	d[a]=c%10;
	c=c/10;}
	printf("%d\n",a);
	while(a>=1)
	{printf("%d\n",d[a]);
	a--;
	}
	
	
	return 0;
}

#include <cstdio>
using namespace std;
int main(){
	int num,a,b,c,d;
	scanf("%d",&num);
	if (1000<=num && num<10000)
	{
		a=num/1000;
		b=(num-(a*1000))/100;
		c=(num-(a*1000)-(b*100))/10;
		d=(num-(a*1000)-(b*100)-(c*10));
		printf("4\n");
		printf("%d\n",a);
		printf("%d\n",b);
		printf("%d\n",c);
		printf("%d",d);
	}
	else if (num<1000)
	{
		if (100<=num)
		{
			a=num/100;
			b=(num-(a*100))/10;
			c=(num-(a*100)-(b*10));
			printf("3\n");
			printf("%d\n",a);
			printf("%d\n",b);
			printf("%d",c);
		}
		else if (num<100)
		{
			if (10<=num)
			{
				a=num/10;
				b=(num-(a*10));
				printf("2\n");
				printf("%d\n",a);
				printf("%d",b);
			}
			else if (num<10)
			{
				printf("1\n");
				printf("%d",num);
			}
		}
	}
	return 0;
}

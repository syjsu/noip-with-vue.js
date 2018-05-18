#include<stdio.h>
#include<math.h>
int main()
{
	printf("[1] apples\n[2] pears\n[3] oranges\n[4] grapes\n[0] Exit\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("price=3.0");break;
		case 2: printf("price=2.5");break;
		case 3: printf("price=4.1");break;
		case 4: printf("price=10.2");break;
		case 0:break;
		default:printf("price=0");
	}
	return 0;
} 

#include <stdio.h>
int main()
{
	int n;
	printf("[1] apples\n");
	printf("[2] pears\n");
	printf("[3] oranges\n");
	printf("[4] grapes\n");
	printf("[0] Exit\n");
	scanf("%d",&n);
	if (n==0) return 0;
	printf("price=");
	if (n==1) printf("3.0");
	if (n==2) printf("2.5");
	if (n==3) printf("4.1");
	if (n==4) printf("10.2");
	if (n<0 || n>4) printf("0");
	return 0;
} 

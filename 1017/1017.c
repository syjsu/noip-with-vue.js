#include<stdio.h>
int main()
{
	int ch;
	double a[5]={0.0,3.0,2.5,4.1,10.2};
	printf("[1] apples\n[2] pears\n[3] oranges\n");
	printf("[4] grapes\n[0] Exit\n");
    scanf("%d",&ch);
    if(ch==1||ch==2||ch==3||ch==4)
    printf("price=%.1lf",a[ch]);
	else if(ch<0||ch>4)
	printf("price=0");
	else
	return 0;
}

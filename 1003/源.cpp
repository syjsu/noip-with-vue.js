#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int num;
	char x[400];
	char str[50];
	scanf("%s",str);
	sprintf(x,"%s%s",str,str);
	num=atoi(x);
	printf("%d",num/7/11/13);
	system("pause");

}

  /*int n;
　char *str = "12345.67";
　n = atoi(str);
　printf("string = %s integer = %d\n", str, n);
　return 0;*/
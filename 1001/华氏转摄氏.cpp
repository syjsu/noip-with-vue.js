#include <stdio.h>
int main()
{
	float a;
	printf("请输入华氏温度\n");
	scanf("%f",&a);
	printf("转化为%.4f摄氏度",5*(a-32)/9);
}
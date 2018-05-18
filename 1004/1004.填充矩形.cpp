#include<cstdio>
int main()
{
	int n,m,a;
	scanf("%d %d %d",&n,&m,&a);
	printf("%ld\n",((long)n/a)*(m/a)); //①将矩形进行分隔;②乘积有可能超出int范围; 
	return 0;
}
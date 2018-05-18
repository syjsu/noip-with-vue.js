//浮点数取余数
#include <math.h>
#include <stdio.h>
int main()
{
	int a,b,out1,out2,out3;
	b = out1 = out2 = out3 = 0;
	int q, w, e = 0;
	a = 0;
	scanf("%d", &a);
	for (; b < a; b++)
	{
		scanf("%d%d%d", &q,&w,&e);
		out1 = q+out1;
		out2 = w+out2;
		out3 = e+out3;
	}
	printf("%d %d %d %d", out1, out2, out3,out1+out2+out3);
	getchar();
	getchar();
	return 0;
}

#include <stdio.h>
int main(void)
{
	float Fn, Cn;
	Fn = 0;
	Cn = 0;
	scanf("%f", &Fn);
	Cn = 1.0*(5 * Fn - 160) / 9;
	printf("%.4f", Cn);
	getchar();
	getchar();
	return 0;
}
#include <cstdio>

int main()
{
	long long a, b, c, b0;
	scanf("%lld%lld", &a, &b);
	c = a % b;
	b0 = b;
	while (c)
	{
		a = b;
		b = c;
		c = a % b;
	}
	b0 /= b;
	if (b%b0)	printf("No");
	else		printf("Yes");
	return 0;
}

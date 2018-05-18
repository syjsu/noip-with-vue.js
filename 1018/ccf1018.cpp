#include <cstdio>
#define ZERO 0.001

int main()
{
	double fee;
	int t=0;
	scanf("%lf", &fee);
	fee -= 0.5;
	t += 3;
	while (fee>ZERO)
	{
		fee -= 0.2;
		t += 1;
	}
	printf("%d", t);
	return 0;
}

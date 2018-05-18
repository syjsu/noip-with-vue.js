#include <cstdio>
#include <cmath>
#include <cstring>

int main()
{
	int n, i, j;
	int flag[10000+5];
	memset(flag, 1, sizeof(flag));
	scanf("%d", &n);
	for (i=2; i<sqrt(n); i++)
		for (j=2; i*j<=n; j++)
			flag[i*j] = 0;
	if (n>=5)
	{
	   for (i=2; i<=n-2; i++)
	   	   	if (flag[i] && flag[i+2])	printf("%d %d\n", i, i+2);
	}
	else
		printf("empty");
	return 0;
}

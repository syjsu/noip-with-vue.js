#include <cstdio>

int main()
{
	int m, n, i, j;
	int d[100][100];
	scanf("%d%d", &m, &n);
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%d", &(d[i][j]));
	for (j=0; j<n; j++)
	{
		for (i=m-1; i>=0; i--)
			printf("%d ", d[i][j]);
		printf("\n");
	}
	return 0;
}

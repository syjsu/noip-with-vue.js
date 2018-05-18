#include <cstdio>

int main()
{
	int count[102][102];
	int n, m, i, j;
	char c;
	scanf("%d%d", &n, &m);
	for (i=0; i<=n; i++)
		for (j=0; j<=m; j++)
			count[i][j] = 0;
	for (i=1; i<=n; i++)
	{
		scanf("\n");
		for (j=1; j<=m; j++)
		{
			scanf("%c", &c);
			if (c=='*')
			{
				count[i][j] = 10;
				++count[i-1][j-1];
				++count[i-1][j];
				++count[i-1][j+1];
				++count[i][j+1];
				++count[i+1][j+1];
				++count[i+1][j];
				++count[i+1][j-1];
				++count[i][j-1];
			}
		}
	}
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=m; j++)
		{
			if (count[i][j]<10)
			   printf("%d", count[i][j]);
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}

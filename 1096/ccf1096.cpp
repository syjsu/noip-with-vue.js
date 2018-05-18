#include <cstdio>

int main()
{
	int mark[1000][5];
	int n, m, i, j, p, score;
	int k[5];
	
	scanf("%d%d", &n, &m);
	for (i=0; i<n; i++)
		for (j=0; j<5; j++)
			scanf("%d", &(mark[i][j]));
	for (i=0; i<m; i++)
	{
		for (j=0; j<5; j++)
			scanf("%d", k+j);
		scanf("%d", &p);
		score = 0;
		for (j=0; j<5; j++)
			score += k[j]*mark[p-1][j];
		printf("%d ", score);
	}
	return 0;
}

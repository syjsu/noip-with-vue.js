#include <cstdio>

int main()
{
	int A[100][100], B[100][100], C[100][100];
	int n, m, k;
	int i, j, s, h, l;
	scanf("%d%d%d", &n, &m, &k);
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			scanf("%d", &(A[i][j]));
	for (i=0; i<m; i++)
		for (j=0; j<k; j++)
			scanf("%d", &(B[i][j]));
	
	for (h=0; h<n; h++)
		for (l=0; l<k; l++)
		{
			s = 0;
			for (i=0; i<m; i++)
				s += A[h][i] * B[i][l];
			C[h][l] = s;
		}
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<k; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}
	return 0;
}

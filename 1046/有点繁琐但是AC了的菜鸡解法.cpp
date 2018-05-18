#include <cstdio>

int main()
{
	int n, num[100][100];
	int i, x=0, y=0;
	int step=1;
	scanf("%d", &n);
	for (i=1; i<=n*n; i++)
	{
		num[x][y] = i;
		x += step;
		y -= step;
		if (x>=n && y<0)
		{
			x -= 1;
			y += 2;
			step *= -1;
		}
		else if (x<0 && y>=n)
		{
			x += 2;
			y -= 1;
			step *= -1;
		}
		else if (y<0 || y>=n)
		{
			y += (y<0) ? 1 : -1;
			if (y>=n-1)	x += 2;
			step *= -1;
		}
		else if (x<0 || x>=n)
		{
			x += (x<0) ? 1 : -1;
			if (x>=n-1)	y += 2;
			step *= -1;
		}
	}
	for (x=0; x<n; x++)
	{
		for (y=0; y<n; y++)
			printf("%d ", num[x][y]);
		printf("\n");
	}
	return 0;
} 

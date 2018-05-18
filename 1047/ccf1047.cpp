#include <cstdio>

int main()
{
//	freopen("in.txt", "r", stdin);
	int num[5][5];
	int flag[5][5];
	int i, j;
	int m, p;
	int found=0;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
			flag[i][j] = 0;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
			scanf("%d", &num[i][j]);
	for (i=0; i<5; i++)
	{
		p = 0;
		m = num[i][0];
		for (j=0; j<5; j++)
			if (num[i][j]>m)
			{
				p=j;
				m=num[i][j];
			}
		flag[i][p] += 1;
	}
	for (j=0; j<5; j++)
	{
		p = 0;
		m = num[0][j];
		for (i=0; i<5; i++)
			if (num[i][j]<m)
			{
			   p=i;
			   m=num[i][j];
			}
		flag[p][j] += 1;
	}
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
			if (flag[i][j]==2)
			{
			   printf("%d %d %d\n", i+1, j+1, num[i][j]);
			   found = 1;
			}
	if (!found)		printf("not found\n");		
	return 0;
} 

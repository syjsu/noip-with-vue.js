#include <cstdio>

int main()
{
	int num[100][100], n;
	int i, j, s;
	int hang[100], lie[100];
	int counth, countl;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d", &(num[i][j]));
	for (i=0; i<n; i++)
	{
		s = 0;
		for (j=0; j<n; j++)
			s += num[i][j];
		hang[i] = s % 2;
	}
	for (j=0; j<n; j++)
	{
		s = 0;
		for (i=0; i<n; i++)
			s += num[i][j];
		lie[j] = s%2;
	}
	counth = countl = 0;
	for (i=0; i<n; i++)
		if (hang[i])	counth++;
	for (j=0; j<n; j++)
		if (lie[j])		countl++;
	if (counth==countl)
	{
		if (counth==0)
			printf("OK");
		else if (counth==1)
		{
			for (i=0; i<n; i++)
				if (hang[i])	break;
			for (j=0; j<n; j++)
				if (lie[j])		break;
			printf("%d %d", i+1, j+1);
		}
		else printf("Corrupt");
	}
	else printf("Corrupt");
	return 0;
}

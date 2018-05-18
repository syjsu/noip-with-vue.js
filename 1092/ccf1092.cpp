#include <cstdio>

int main()
{
//	freopen("in.txt", "r", stdin);
	int n, q, l, r, i, j, name, tot;
	int num[100];
	char who[100], str[5+1];
	scanf("%d%d", &n, &q);
	for (i=0; i<n; i++)
		scanf("%d", num+i);
	for (i=0; i<n; i++)
	{
		scanf("%s", str);
		who[i] = str[0];
	}
	for (i=0; i<q; i++)
	{
		tot = 0;
		scanf("%s", str);
		scanf("%d%d", &l, &r);
		name = str[0];
		for (j=l-1; j<r; j++)
			if (who[j] == name)	tot += num[j];
		printf("%d\n", tot);
	}
	return 0;
}

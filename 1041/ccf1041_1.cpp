#include <cstdio>
#include <cstdlib>

struct c
{
	int id;
	int score;
};

int cmp(const void *a, const void *b)
{
	if (((struct c*)a)->score != ((struct c*)b)->score)
	   return ((struct c*)b)->score - ((struct c*)a)->score;
	else
		return ((struct c*)a)->id - ((struct c*)b)->id;
}

int main()
{
	int n, m;
	struct c cc[50000];
	int i, line;
	scanf("%d%d", &n, &m);
	for (i=0; i<n; i++)
		scanf("%d%d", &((cc+i)->id), &((cc+i)->score));
	qsort(cc, n, sizeof(cc[0]), cmp);
	line = (cc+(int)(m*1.5)-1)->score;
	for (i=(int)(m*1.5); (cc+i)->score==line; i++);
	printf("%d %d\n", line, i);
	for (i=0; (cc+i)->score>=line; i++)
		printf("%d %d\n", (cc+i)->id, (cc+i)->score);
	return 0;
}

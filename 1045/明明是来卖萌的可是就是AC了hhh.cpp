#include <cstdio>

int main()
{
	int i, s1=0, s2=0, n;
	for (i=0; i<16; i++)
	{
		scanf("%d", &n);
		if (!(i%5))		s1 += n;
		else if (!(i%3))	s2 += n;	//"else" here ensured 0 and 15 not included
	}
	printf("%d %d", s1, s2);
	return 0;
}

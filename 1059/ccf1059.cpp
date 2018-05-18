#include <cstdio>

int main()
{
	int s=0, a;
	char c;
	while (scanf("%d", &a))
	{
		s += a;
		scanf("%c", &c);
		if (c != '+')	break;
	}
	printf("%d", s);
	return 0;
}

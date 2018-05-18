# include <stdio.h>
int main (void) {
	int a=0, b=0, c=0;

	scanf("%d %d", &a, &b);

	( (a + b) < 10 ) ? (printf("water")) : (a > b) ? \
						(printf("tree")) : (printf("tea"));

	return 0;
}
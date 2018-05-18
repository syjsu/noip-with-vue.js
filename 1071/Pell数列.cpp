//×÷ÕßÕÔº£ 
#include <stdio.h>

unsigned long fun(unsigned long x) {
	if (x == 1 || x == 2) {
		return x;
	}
	unsigned long p1 = 1;
	unsigned long p2 = 2;
	unsigned long sum = 0;
	for (unsigned long i=2;i<x;i++) {
		sum = 2*p2 + p1;
		if (sum >= 32767) {
			sum = sum % 32767;
		} 
		p1 = p2;
		p2 = sum;
	}
	return sum;
}

int main(void) {
	int n;
	scanf("%d",&n);
	while (n-- > 0) {
		unsigned long a;
		scanf("%ld",&a);
		printf("%d\n",fun(a));
	}

}

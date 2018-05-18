//×÷ÕßÕÔº£ 
#include <stdio.h>
#include <math.h>

int is(long t) {
	if (t == 1) {
		return 0;
	}
	int end = sqrt(t);
	for (int i = 2;i<end;i++) {
	    if (t % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(void) {
	int n;
	scanf("%d",&n);
	while (n-->0) {
		int t;
		scanf("%d",&t);
		if (is(t)) {
	   	  printf("yes\n");
    	} else {
    		printf("no\n");
		}
		
	}
}

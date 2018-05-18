#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int gcd(int a,int b) {
  if (a < b) {
  	return gcd(b,a);
  }	else {
  	if (b == 0) {
  		return a;
	}
  	int m = a % b;
  	return gcd(b,m);
  }
}

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	int g = gcd(a,b);
	int x = (a / g) * (b / g) * g;
	printf("%d\n",x);
}

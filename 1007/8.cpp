#include <cstdio>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,d;
	scanf("%f %f",&a,&b);
	c=ceil(a/b)-1;
	d=a-b*c;
	printf("%.2f",d);
	return 0;
}

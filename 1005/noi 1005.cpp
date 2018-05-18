#include<stdio.h>
#include<math.h>
int main(){
	double r, x, p, y;
	scanf("%lf%lf%lf", &r, &x, &p);
	y=x*pow(((100+r)/100),p);
	printf("%.2lf", y);
	return 0;
}

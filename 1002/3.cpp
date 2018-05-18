#include <cstdio>
#include <math.h>
using namespace std;
int main(){
	double a,b,c,s,p;
	scanf("%lf %lf %lf",&a,&b,&c);
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.4lf",s);
	return 0;
}

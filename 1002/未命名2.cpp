#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double p=(a+b+c)/2;
	printf("%.4f",sqrt(p*(p-a)*(p-c)*(p-b)));
	return 0;
}

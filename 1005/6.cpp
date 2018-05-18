#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	double R,X,Y,P;
	scanf("%lf %lf %lf",&R,&X,&P);
	Y=X*pow(((100+R)/100),P);
	printf("%.2lf",Y);
	return 0;
}

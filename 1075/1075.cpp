#include<cstdio>
#include<cmath>
using std::sqrt;
int main()
{
	float a,x;
	int n;
	scanf("%f%d",&x,&n);
	a = x;
	for(int i=1;i<=n;i++){
		a = i + a;
		a = sqrt(a);
	}
	printf("%.2f",a);
	return 0;
}
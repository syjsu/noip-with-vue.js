#include <cstdio>
using namespace std;
int main(){
	float a;
	scanf("%f",&a);
	if (a>=10 and a<20)
	{
		printf("%.3f",a/2-1.5);
	}
	else if (a<10)
	{
		if (a>=5)
		{
			printf("%.3f",2-1.5*(a-3)*(a-3));
		}
		else if (a>=0 and a<5)
		{
			printf("%.3f",a+2.5);
		}
	}
	return 0;
}

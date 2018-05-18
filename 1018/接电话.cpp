#include <cstdio>
using namespace std;
int main(){
	float a;
	scanf("%f",&a);
	if (a<=0.5)
	{
		printf("3");
		return 0;
	}
	else 
	{
		printf("%.f",(a-0.5)/0.2+3);
	}
	return 0;
}

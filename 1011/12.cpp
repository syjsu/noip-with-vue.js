#include <cstdio>
using namespace std;
int main(){
	double x,y;
	scanf("%lf %lf",&x,&y);
	if (x >= -1 and x <=1 and y>= -1 and y <= 1)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
	return 0;
}

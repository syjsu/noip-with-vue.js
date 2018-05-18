#include <cstdio>
using namespace std;
int main(){
	int s;
	scanf("%d",&s);
	if (s>=90)
	{
		printf("Excellent");
		return 0;
	}
	if (80<=s && s<90)
	{
		printf("Good");
		return 0;
	}
	if (60<=s && s<80)
	{
		printf("Pass");
		return 0;
	}
	if (s<60)
	{
		printf("Fail");
	}
	return 0;
}

// QQ:1206614133
#include <cstdio>
using namespace std;
int main(){
	int a,b[105],i;
	float t=0;
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		scanf("%d",&b[i]);
		t=t+b[i];
	}
	t=t/a;
	printf("%.2f",t);
	return 0;
}

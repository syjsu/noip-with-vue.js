// QQ:1206614133
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{	
	long a;
	int b=0;
	scanf("%ld",&a);
	for(int i=1;i<=sqrt(a);i++)
	if(a%i==0){
	b+=2;
	if(i==sqrt(a))b-=1;
	}
	printf("%d",b);
	return 0;	
}

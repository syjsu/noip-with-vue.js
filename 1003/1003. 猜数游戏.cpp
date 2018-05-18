#include<cstdio>
using namespace std;
int main()
{
	int x;
	scanf("%d",&x);
	if(x*1000+x%7%11%13)
    printf("%d",x);
	return 0;
}

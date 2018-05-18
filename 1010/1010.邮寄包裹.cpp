#include<cstdio>
using namespace std;
int main()
{
	int x;
	float fee=0.2;
	scanf("%d",&x);
    if(x>30)
	printf("Fail");
	else
	{
    if(x<=10)
	fee+=x*0.8;
	else
    if(10<x&&x<=20)
    fee+=(x-10)*0.75+8;
    else
    fee+=(x-20)*0.7+15.5;
    printf("%.2f",fee);
    }
	return 0;
}

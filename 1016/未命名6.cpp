#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a % 400==0 || (a%4==0 && a%100!=0))
	{	if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12)
   		printf("31");
   		else 
   		{
		   if(b==2)
		   printf("29");
		   else
		   printf("30");
   		}
	} 
	else
	{
		if (b==1||b==3||b==5||b==7||b==8||b==10||b==12)
		printf("31");
		else 
		{
			if(b==2)
			printf("28");
			else
			printf("30");
		}
	} 
	return 0;
}







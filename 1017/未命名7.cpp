#include <cstdio>
using namespace std;
int main()
{
	int a;
	printf("[1] apples\n[2] pears\n[3] oranges\n[4] grapes\n[0] Exit\n");
	scanf("%d",&a);	
	if (a==1)
	printf("price=3.0");
	else
	{
		if (a==2)
		printf("price=2.5");
		else
		{
			if (a==3)
			printf("price=4.1");
			else
			{
				if (a==4)
				printf("price=10.2");
				else
				{
					if (a==0)
					return 0;
					else 
					printf("price=0");
	
				}
			}
		}
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a=1987,i,g,k,t,w=25,s=0;
	scanf("%d",&n);
	s=1+9+8+7;
	printf("1 9 8 7 ");
	for(i=5;i<=n;i++)
	{
		printf("%d ",w%10);
		s=s+w%10;
		t=a/1000;
		a=a%1000*10+w%10;
		w=w-t+w%10;
	}
	printf("\n%d",s);
	return 0;
}

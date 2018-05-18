#include<stdio.h>
int sum=0;
void hannuo(int x, char a,char b,char c)
{
	if(x==1) printf("%d.Move %d from %c to %c\n",++sum,x,a,c);
	else
	{
		hannuo(x-1,a,c,b);
		printf("%d.Move %d from %c to %c\n",++sum,x,a,c);
		hannuo(x-1,b,a,c);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	hannuo(n,'a','b','c');
	return 0;
}

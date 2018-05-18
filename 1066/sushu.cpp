#include<stdio.h>
int su(int a)
{
	int i,k=0;
	for(i=2;i<a;i++)
	{
	if(a%i==0) return 0;	
	else k++;
    }
    if(k==a-2) return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	if(su(i)==1&&su(i+2)==1) printf("%d %d\n",i,i+2);
	getchar();getchar();
	
	
}

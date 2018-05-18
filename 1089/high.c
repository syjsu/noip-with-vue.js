#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 200
int main(void)
{
    char s[200];
    int a[N+1]={0},b[N+1]={0},c[N+1]={0},i,j,length,carry;
    gets(s);
    length=strlen(s);
    for(i=length-1;i>=0;i--)
    a[N-length+i+1]=s[i]-48;
    gets(s);
    length=strlen(s);
    for(i=length-1;i>=0;i--)
    b[N-length+i+1]=s[i]-48;
    carry=0;
    for(i=N;i>=0;i--)
    {
    	c[i]=a[i]+b[i]+carry;
    	carry=c[i]/10;
    	c[i]%=10;
	}
	j=0;
	while(a[j]==0&&j<N)
	j++;
	for(i=j;i<=N;i++)
	printf("%d",c[i]);
	printf("\n");
	system("PAUSE");
	return 0;
}

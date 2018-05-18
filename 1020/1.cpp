#include<cstdio>
#include<cstring>
char b[5];
int main()
{
	gets(b);
	int len=strlen(b),i;
	printf("%d\n",len);
	for(i=0;i<len;i++)
	{
		printf("%c\n",b[i]);
	}
	return 0;
}
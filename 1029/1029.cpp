// QQ:1206614133
#include <cstdio>
#include <cstring>
char a[500000];
int main()
{
	int i;
	scanf("%s",a);
	int x=strlen(a);
	for(i=0;i<x;i++)
	{
		int x=a[i];
		if(x>=65 && x<=122)
		{
			if(a[i]=='x' ||a[i]=='X'||a[i]=='y'||a[i]=='Y'||a[i]=='z'||a[i]=='Z')
			{	
				printf("%c",a[i]-23);
			}
			else 
				printf("%c",a[i]+3);
		}
		else
			printf("%c",a[i]);
	}
	return 0;
}

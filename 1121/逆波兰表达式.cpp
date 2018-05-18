#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
char* ptr;
double dowith()
{
	char c;
	char* bak;

	while(*ptr)
	{
		c=*ptr;
		switch(c)
		{
			case '+': ptr++; return dowith()+dowith();
			case '-': ptr++; return dowith()-dowith();
			case '*': ptr++; return dowith()*dowith();
			case '/': ptr++; return dowith()/dowith();
			case ' ': ptr++; break;
			default:
			bak=ptr;
			while(*ptr != ' ' && *ptr != 0) ptr++;
			*ptr = 0;
			ptr++;
			return atof(bak);
			break;
		}
	}
	return 0;
}
int main()
{
	char buf[1024];
	cin.getline(buf,1024);
	ptr=buf;
	printf("%f", dowith());
}

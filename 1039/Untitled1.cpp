#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 0:printf("1\n");break;
		case 1:printf("2\n");break;
		case 2:printf("4\n");break;
		case 3:printf("8\n");break;
		case 4:printf("16\n");break;
		case 5:printf("32\n");break;
		case 6:printf("64\n");break;
		case 7:printf("128\n");break;
		case 8:printf("256\n");break;
		case 9:printf("512\n");break;
		case 10:printf("1024\n");break;
		case 11:printf("2048\n");break;
		case 12:printf("4096\n");break;
		case 13:printf("8192\n");break;
		case 14:printf("16384\n");break;
		case 15:printf("32768\n");break;
		case 16:printf("65536\n");break;
		case 17:printf("131072\n");break;
		case 18:printf("262144\n");break;
		case 19:printf("524288\n");break;
		case 20:printf("1048576\n");break;
	}
	return 0;
}

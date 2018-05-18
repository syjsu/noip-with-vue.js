#include<cstdio>
using namespace std;
int main()
{
	int ye,nian;
	scanf("%d%d",&nian,&ye);
	switch(ye)
    { 
	case 1:printf("31");break;
	case 2:if((nian%4==0&&nian%100!=0)||(nian%400==0))printf("29");
	else printf("28");break;
	case 3:printf("31");break;
	case 4:printf("30");break;
	case 6:printf("30");break;
	case 7:printf("31");break;
	case 8:printf("31");break;
	case 9:printf("30");break;
    case 10:printf("31");break;
	case 11:printf("30");break;
	case 12:printf("31");break;
	}
	return 0;
}		

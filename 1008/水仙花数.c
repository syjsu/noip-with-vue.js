#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,n;
	scanf("%d",&e);
	 a=e/100;//百位数 
	 b=e%10;//个位数 
	 d=e/10;//辅助 
	 c=d%10;//十位数 
	 n=a*a*a+c*c*c+b*b*b;
	 if(e==n)//!!!比较运算符双等号！！！ 
	  printf("YES");
	else
	 printf("NO");
	 return 0;
} 

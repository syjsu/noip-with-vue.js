#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,n;
	scanf("%d",&e);
	 a=e/100;//��λ�� 
	 b=e%10;//��λ�� 
	 d=e/10;//���� 
	 c=d%10;//ʮλ�� 
	 n=a*a*a+c*c*c+b*b*b;
	 if(e==n)//!!!�Ƚ������˫�Ⱥţ����� 
	  printf("YES");
	else
	 printf("NO");
	 return 0;
} 

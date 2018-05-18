#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a+b>c,1<=a,b,c<=1000)
		if(a==b==c) printf("Equilateral\n");
		else  if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) printf("Right\n");
		         else printf("General\n");	
    if(a+b<=c) printf("No\n");
	return 0;
}

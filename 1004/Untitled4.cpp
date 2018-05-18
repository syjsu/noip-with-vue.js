#include<stdio.h>
int main()
{
float r,x,p,d,e,a=1;
int i;
scanf("%f%f%f",&r,&x,&p);
e=((100+r)/100);
for(i=0;i<p;i++)
a=e*a;
d=x*a;
printf("%.2f",d);
}

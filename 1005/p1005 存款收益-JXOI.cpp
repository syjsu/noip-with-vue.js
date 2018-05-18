#include <cstdio>
#include <cmath>
float r,x,p,i,y;
int main()
{scanf("%f %f %f",&r,&x,&p);
 r=(100+r)/100;
 y=r;
 for(i=2;i<=p;i++)
   y=y*r;
 y=y*x; 
 printf("%.2f\n",y);
}

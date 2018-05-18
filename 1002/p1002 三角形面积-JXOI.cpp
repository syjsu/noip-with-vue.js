#include <cstdio>
#include <cmath>
float a,b,c,p,s;
int main()
{scanf("%f %f %f",&a,&b,&c);
 p=(a+b+c)/2;
 s=sqrt(p*(p-a)*(p-b)*(p-c));
 printf("%.4f\n",s);
}

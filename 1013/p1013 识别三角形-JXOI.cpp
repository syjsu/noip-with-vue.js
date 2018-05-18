#include <cstdio>
int a,b,c;
int main()
{scanf("%d %d %d",&a,&b,&c);
 if((a+b<=c)||(a+c)<=b||(b+c<=a)) printf("NO");
     else {if(a==b&&b==c) printf("Equilateral");
                else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)) printf("Right");
                                     else printf("General");
          }
}

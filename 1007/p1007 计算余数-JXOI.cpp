#include <cstdio>
double a,b;
int main()
{scanf("%lf %lf",&a,&b);
 if(a<b) printf("%.2lf",a);
    else 
	{
	 while(a>b)
	  {a=a-b;}
	 printf("%.2lf",a);
    }
}

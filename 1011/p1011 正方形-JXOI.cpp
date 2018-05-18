#include <cstdio>
#include <cmath>
float x,y;
int main()
{scanf("%f %f",&x,&y);
 if(fabs(x)<=1&&fabs(y)<=1) printf("Yes\n");
                 else       printf("No\n");
} 

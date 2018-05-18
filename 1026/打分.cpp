#include<stdio.h>
int main()
{
    int a, min=1000, max=0, s=0, n=10;
    for(int i=1; i<=n; i++)
    {
               scanf("%d", &a);
               s=s+a; 
               if(a<min) min=a;
               if(a>max) max=a;     
    }
    printf("%.3f", 1.0*(s-max-min)/8);
    int z;
    scanf("%d", &z);
    return 0;
}

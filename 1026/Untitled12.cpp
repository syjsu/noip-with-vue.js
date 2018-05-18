#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, s=0, max=0, min=100; 
    while (scanf("%d",&n)==1)
    {
          s=n+s;
                if(n<min)  min=n;
                if(n>max)  max=n;
    }
    printf("%.3f", (s-min-max)/8);
    system("pause");
    return 0;
    
}

#include <stdio.h>
int main(void)
{
    int a, b, goal;
    int i;
    
    scanf("%d %d", &a, &b);
    for (i = 0, goal = 1; i < b; i++)
    {
        goal *= a;
        goal %= 10;
    }
    printf("%d", goal);
    
    return 0;
}
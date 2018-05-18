#include <stdio.h>
#include <math.h>
int main(void)
{
    int input, goal;
    int i;
    scanf("%lld", &input);
    for (i = 1, goal = 0; i <= sqrt(input); i++)
    {
        if (input % i == 0)
            goal += 2;
    }
    if (--i * i == input)
        goal -= 1;
    printf("%d", goal);
    return 0;
}

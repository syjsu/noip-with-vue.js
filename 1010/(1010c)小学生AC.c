#include <stdio.h>
int main(void)
{
    int wei;
    float goal;
    scanf("%d", &wei);
    if (wei <= 10)
        goal = 0.8 * wei;
    else if (wei <= 20)
        goal = 0.8 * 10 + 0.75 * (wei - 10);
    else if (wei <= 30)
        goal = 0.8 * 10 + 0.75 * 10 + 0.7 * (wei - 20);
    else
        goal = 0;

    if (goal)
        printf("%.2f", goal + 0.2);
    else
        printf("Fail");
    return 0;
}

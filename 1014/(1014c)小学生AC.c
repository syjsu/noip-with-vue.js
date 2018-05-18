#include <stdio.h>
int main(void)
{
    int score;
    scanf("%d", &score);
    if (score >= 90)
        puts("Excellent");
    else if (score >= 80)
        puts("Good");
    else if (score >= 60)
        puts("Pass");
    else
        puts("Fail");
    return 0;
}

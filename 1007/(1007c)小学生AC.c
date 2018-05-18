#include <stdio.h>
int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2f", a - (int)(a / b) * b);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(void)
{
    float r, x, p;
    scanf("%f %f %f", &r, &x, &p);
    printf("%.2f", x * pow((100 + r) / 100, p));
    return 0;
}

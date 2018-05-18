#include <stdio.h>
#define PRICE_FIRST 0.5
int main(void)
{
    float input;
    scanf("%f", &input);
    if (input <= PRICE_FIRST)
        printf("3");
    else
        printf("%g", (input - PRICE_FIRST) / 0.2 + 3.0);
    return 0;
}

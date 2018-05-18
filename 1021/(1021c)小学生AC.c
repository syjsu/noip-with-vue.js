#include <stdio.h>
#define LINE_FIRST 100000 * 0.1
#define LINE_SECOND (200000 - 100000) * 0.075 + LINE_FIRST
#define LINE_THIRD (400000 - 200000) * 0.05 + LINE_SECOND
#define LINE_FORTH (600000 - 400000) * 0.03 + LINE_THIRD
#define LINE_FIFTH (1000000 - 600000) * 0.015 + LINE_FORTH
int main(void)
{
    double input = 0, output = 0;
    scanf("%lf", &input);
    if (input <= 100000)
        output = input * 0.1;
    else if (input <= 200000)
        output = LINE_FIRST + (input - 100000) * 0.075;
    else if (input <= 400000)
        output = LINE_SECOND + (input - 200000) * 0.05;
    else if (input <= 600000)
        output = LINE_THIRD + (input - 400000) * 0.03;
    else if (input <= 1000000)
        output = LINE_FORTH + (input - 600000) * 0.015;
    else
        output = LINE_FIFTH + (input - 1000000) * 0.01;
    printf("%.3f", output);
    return 0;
}

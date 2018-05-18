#include <stdio.h>
#define MAX_UP 1
#define MAX_DOWN -1
#define MAX_LEFT -1
#define MAX_RIGHT 1
int main(void)
{
    float x, y;
    int up = 0, down = 0, left = 0, right = 0;
    scanf("%f %f", &x, &y);
    if (x <= MAX_UP)
        up = 1;
    if (x >= MAX_DOWN)
        down = 1;
    if (x >= MAX_LEFT)
        left = 1;
    if (x <= MAX_RIGHT)
        right = 1;
    if (up && down && left && right)
        printf("Yes");
    else
        printf("No");
    return 0;
}

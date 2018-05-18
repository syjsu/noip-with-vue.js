#include <stdio.h>
#define two_times(i) 2 * (i)
int main(void)
{
    int n;
    int a, b, c;
    scanf("%d", &n);
    for (a = n; a > 0; a--)
    {
        for (b = 0; b < a - 1; b++)
            putchar(' ');
        for (c = 0; c < two_times(n - a + 1) - 1; c++)
            printf("%d", c + 1);
        putchar('\n');
    }
    for (a = 0; a < n - 1; a++)
    {
        for (b = 0; b < a + 1; b++)
            putchar(' ');
        for (c = 0; c < two_times(n - a - 1) - 1; c++)
            printf("%d", c + 1);
        putchar('\n');
    }
    return 0;
}

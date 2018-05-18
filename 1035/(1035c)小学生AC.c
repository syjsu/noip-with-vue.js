#include <stdio.h>
int dr(int n, int flag);
int main(void)
{
    int input;
    scanf("%d", &input);
    printf("%d", dr(input, 1));
    return 0;
}
int dr(int n, int flag)
{
    int temp;
    if (n < 10)
        return n;
    temp = dr(n / 10, 0) + n % 10;
    if (flag && temp >= 10)
        temp = dr(temp, 1);
    return temp;
}

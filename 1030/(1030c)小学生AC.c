#include <stdio.h>
int main(void)
{
    long long n;
    long long i;
    scanf("%lld", &n);
    for (i = 0; n != 1; i++)
    {
        if (n % 2)
            n = 3 * n + 1;
        else
            n /= 2;
    }
    printf("%lld", ++i);
    return 0;
}

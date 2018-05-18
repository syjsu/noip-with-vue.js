#include <stdio.h>
#define compare(m, n) (m > n) ? m, n : n, m
int gcd(int m, int n);
int main(void)
{
    int m, n, temp;
    int flag;
    scanf("%d %d", &m, &n);
    flag = gcd(compare(m, n));
    printf("%s", (flag == 1) ? "Yes" : "No");
    return 0;
}
int gcd(int m, int n)
{
    if (n)
        return gcd(n, m % n);
    else
        return m;
}

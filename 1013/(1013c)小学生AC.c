#include <stdio.h>
#define e(a, b, c) (a == b && a == c) ? 1 : 0
#define r(a, b, c) (a * a + b * b == c * c || \
                    a * a + c * c == b * b || \
                    b * b + c * c == a * a) ? 1 : 0
int chk_tri(int a, int b, int c);
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (!chk_tri(a, b, c))
        puts("NO");
    else if (e(a, b, c))
        puts("Equilateral");
    else if (r(a, b, c))
        puts("Right");
    else
        puts("General");
    return 0;
}
int chk_tri(int a, int b, int c)
{
    if (a + b <= c)
        return 0;
    if (a + c <= b)
        return 0;
    return 1;
}

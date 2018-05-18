#include <stdio.h>
int chk_low(int i);
int chk_upp(int i);
int main(void)
{
    int input;
    scanf("%d", &input);
    if (chk_low(input % 123))
        putchar(input % 123);
    else if (chk_upp(input % 91))
        putchar(input % 91);
    else
        putchar('*');
    
    return 0;
}
int chk_low(int i)
{
    int flag = 0;
    if (i >= 97)
        flag = 1;
    if (i <= 122 && flag)
        return 1;
    return 0;
}
int chk_upp(int i)
{
    int flag = 0;
    if (i >= 65)
        flag = 1;
    if (i <= 90 && flag)
        return 1;
    return 0;
}
#include <stdio.h>
int chk_leap(int year);
int main(void)
{
    const int days[2][12+1] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    int year, month;
    int flag;
    scanf("%d %d", &year, &month);
    flag = (month == 2) ? chk_leap(year) : 0;
    printf("%d", days[flag][month]);
    return 0;
}
int chk_leap(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1;
    return 0;
}

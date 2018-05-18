#include <stdio.h>
int check(int input);
int main(void)
{
    int input;
    scanf("%d", &input);
    printf("%s", (input == check(input)) ? "YES" : "NO");
    return 0;
}
int check(int input)
{
    int last = 0;
    if (input / 10)
        last = check(input / 10);
    input %= 10;
    return input * input * input + last;
}

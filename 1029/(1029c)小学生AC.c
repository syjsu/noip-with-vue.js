#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char s[101];
    int i;
    int word_flag;
    for (i = 0; (s[i] = getchar()) != '\n'; i++)
    {
        if (isupper(s[i]))
        {
            if (s[i] < 'X')
                s[i] += 3;
            else
                s[i] =  3 - ('Z' - s[i]) - 1 + 'A';
        }
        if (islower(s[i]))
        {
            if (s[i] < 'x')
                s[i] += 3;
            else
                s[i] = 3 - ('z' - s[i]) - 1 + 'a';
        }
    }
    s[i] = '\0';
    printf("%s", s);
    return 0;
}

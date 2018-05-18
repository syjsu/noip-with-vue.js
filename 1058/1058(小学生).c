#include <stdio.h>
#include <string.h>
int main(void)
{
    char acticle[100][40];
    int i, x, length, end, temp;
    int *flag;
    for (i = 0, flag = 0; !flag; i++)
    {
        scanf("%s", acticle[i]);
        flag = strchr(acticle[i], '.');
    }
    *flag = '\0';
    length = strlen(acticle[0]);
    for (x = 0, end = 0; x < i; x++)
    {
        temp = strlen(acticle[x]);
        if (length > temp)
        {
            length = temp;
            end = x;
        }
    }
    printf("%s", acticle[end]);
    return 0;
}

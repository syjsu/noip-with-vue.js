#include <stdio.h>
int main(void)
{
    int cards[13] = {0};
    int temp;
    int i;
    for (i = 0; i < 13 * 2 - 1; i++)
    {
        scanf("%d", &temp);
        cards[--temp]++;
    }
    for (i = 0; i < 13; i++)
        if (cards[i] != 2)
            break;
    printf("%d\n", ++i);
    return 0;
}

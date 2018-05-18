#include <stdio.h>
int main(void)
{
    int boys, girls;
    scanf("%d %d", &boys, &girls);
    if (boys + girls < 10)
        printf("water");
    else
        printf("%s", (boys > girls) ? "tree" : "tea");
    return 0;
}

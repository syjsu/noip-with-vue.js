#include <stdio.h>
int main(void)
{
    int students = 0;
    int n, i, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        students += temp;
    }
    printf("%.2f", (float) students / n);
    return 0;
}

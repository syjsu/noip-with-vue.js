#include <stdio.h>
#include <string.h>
int main(void)
{
    struct Cars
    {
        int flag;
        char s[8];
        int phone;
        char name[21];
        int v_w;
    }car[1000];
    int i, a;
    int n, v, w;
    int q, op, id, k, goal;
    char s[8];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", car[i].s);
        scanf("%d", &v);
        scanf("%d", &w);
        scanf("%d", &car[i].flag);
        car[i].v_w = v / w;
        if (car[i].flag)
            scanf("%d", &car[i].phone);
        else
            scanf("%s", car[i].name);
    }

    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &op);
        switch (op)
        {
            case 1: scanf("%d", &id);
                    printf("%s\n", car[--id].s);
                    break;
            case 2: scanf("%s", s);
                    for (a = 0; a < n; a++)
                        if (!strcmp(s, car[a].s))
                            break;
                    if (car[a].flag)
                        printf("%d\n", car[a].phone);
                    else
                        printf("%s\n", car[a].name);
                    break;
            case 3: scanf("%d", &k);
                    for (a = 0, goal = 0; a < n; a++)
                        if (car[a].v_w >= k)
                            goal++;
                    printf("%d\n", goal);
                    break;
            default: printf("SB");
                     break;
        }
    }

    return 0;
}

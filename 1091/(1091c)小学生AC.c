#include <stdio.h>
int main(void)
{
    struct Graph
    {
        char graph;
        int a;
        int b;
    }graph[100];
    int n, q;
    int i;
    int id;

    scanf("%d %d", &n, &q);
    for (i = 0; i < n; i++)
    {
        while (getchar() != '\n')
            continue;
        scanf("%c", &graph[i].graph);
        switch (graph[i].graph)
        {
            case 'T': scanf("%d", &graph[i].a);
                      break;
            case 'C': scanf("%d", &graph[i].a);
                      break;
            case 'R': scanf("%d %d", &graph[i].a, &graph[i].b);
                      break;
            default: printf("SB");
                     break;
        }
    }

    for (i = 0; i < q; i++)
    {
        scanf("%d", &id);
        switch (graph[--id].graph)
        {
            case 'T': printf("Triangle %d\n", graph[id].a);
                      break;
            case 'C': printf("Circle %d\n", graph[id].a);
                      break;
            case 'R': printf("Rectangle %d %d\n", graph[id].a, graph[id].b);
                      break;
            default: printf("SB");
                     break;
        }
    }

    return 0;
}

#include <stdio.h>
void menu(void);
int main(void)
{
    enum prices{exit, apples, pears, oranges, grapes};
    menu();
    switch (getchar() - '0')
    {
        case exit:
            break; // exit(0)
        case apples:
            printf("price=3.0");
            break;
        case pears:
            printf("price=2.5");
            break;
        case oranges:
            printf("price=4.1");
            break;
        case grapes:
            printf("price=10.2");
            break;
        default:
            printf("price=0");
            break;
    }
    return 0;
}
void menu(void)
{
    puts("[1] apples");
    puts("[2] pears");
    puts("[3] oranges");
    puts("[4] grapes");
    puts("[0] Exit");
}

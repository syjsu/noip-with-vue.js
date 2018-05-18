#include <stdio.h>
#include <stdlib.h>
int main()
{   int a;
	printf("You have an E-mail.\n(Press Enter to continue)");
    getchar();
    for(a=1;a<=9;a++)
    {
    printf("1");
    getchar();
    printf("0");
    getchar();
    printf("1");
    getchar();    
    printf("\n");
    getchar();
    }
    while(1)
    {printf("**************************************************************************************************************Oh,no!\n");sleep(1000);}
	system("pause");
	return 0;
}

//a=97 z=122  122-97=25
//b=98 z=121  121-98=23
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    printf("%c",'z'-(c-'a'));
    return 0;
}

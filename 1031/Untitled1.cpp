#include <stdio.h>
#include<stdlib.h>
int main ()
{
    int n,o;
    scanf ("%d",&n);
    o=n;
    for (int i=0;i<=n-1;i++)
    {
        for (int p=o-1;p>0;p--)
        printf (" ");
        i++;
        for (int u=2*i-1;u>0;u--)
        printf ("*");
        printf ("\n");
        i--;
        o--;
    }
    system("pause");
    return 0;
}

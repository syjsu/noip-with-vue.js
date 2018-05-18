#include<iostream>
#include<stdio.h>
using namespace std;
int step;
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
        printf("%d%s %d %s %c %s %c\n",++step,".Move",n,"from",a,"to",c);
    else
    {
        hanoi(n-1,a,c,b);
                printf("%d%s %d %s %c %s %c\n",++step,".Move",n,"from",a,"to",c);
            hanoi(n-1,b,a,c);
        }
}
int main()
{
    int n;
   scanf("%d",&n);
    hanoi(n,'a','b','c');
    return 0;
}


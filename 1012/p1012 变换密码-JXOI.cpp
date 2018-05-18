#include <cstdio>
int n;
char c;
int main()
{scanf("%d",&n);
 if((n%123)>=97&&(n%123)<=122) c=n%123;
               else if((n%91)>=65&&(n%91)<=90) c=n%91;
                                    else c='*';
 printf("%c\n",c);
}

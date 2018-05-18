#include <stdio.h>
int main(void)
{
 int y,m,std[]={31,28,31,30,31,30,31,31,30,31,30,31};
 scanf("%d%d",&y,&m);
 if ( m==2 &&((y%100!=0 && y%4==0) || (y%400==0)))
 {
   printf("29\n");
 }
 else
 {
   printf("%d\n",std[m-1]);
 }
 return 0;
}

#include <stdio.h>
int main()
{
float a;
scanf("%f",&a);
if (a>=90) printf("Excellent");
else if(a>=80) printf("Good");
else if(a>=60) printf("Pass");
else printf("Fail");
return 0;
}

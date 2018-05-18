#include <stdio.h>

int main(void) {
   printf("Input: ")
   char c = getchar();
   printf("%c\n",(char)(2 *'a' +25 - c));
   return 0;
}

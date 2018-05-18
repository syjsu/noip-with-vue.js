#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
   int n,m;
   int i,j;
   scanf("%d%d",&n,&m);
   int arr[n][m];
   for (i=0;i<n;i++) {
      for (j=0;j<m;j++) {
        scanf("%d",&arr[i][j]);
      }
   }
   int o;  
   scanf("%d",&o); 
   for (i=0;i<o;i++) {
      char op[2];
      int x,y;
      scanf("%s",op);
      scanf("%d%d",&x,&y);
      x -= 1;
      y -=1;
      if (!strcmp(op,"C")) {
         for (j = 0;j<m;j++) {
            int tmp = arr[x][j];
            arr[x][j] = arr[y][j];
            arr[y][j] = tmp;
         }
      } else {
         printf("%d\n",arr[x][y]);
      }
   }
   return 0;
}

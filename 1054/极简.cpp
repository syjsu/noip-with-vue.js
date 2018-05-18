#include <stdio.h>
#include <string.h>

int main(void) {
	int m,n;
	scanf("%d%d",&m,&n);
	char a[m][n];
	for (int i=0;i<m;i++) {
		scanf("%s",&a[i]);
	}
	for (int i=0;i<m;i++) {
	  for (int j=0;j<n;j++) {
	  	int count = 0;
		if (a[i][j] != '?') {
			printf("*");
		} else {
			if (j-1>=0 && a[i][j-1] == '*') {//左 
				count++;
			}
			if (j+1 <n && a[i][j+1] == '*') {//右 
				count++;
			} 
			if (i-1>=0 && a[i-1][j] == '*') { //上 
				count++;
			}
			if (i+1<m && a[i+1][j] == '*') { //下 
				count++;
			}
			if (j-1 >= 0 && i-1>=0 && a[i-1][j-1] == '*') { //左上 
				count++;
			}
			if (j+1 < n && i+1 < m && a[i+1][j+1] == '*') { //左下 
				count++;
			} 
			if (j-1 >=0 && i+1 < m && a[i+1][j-1] == '*') { //右下 
				count++;
			} 
			if (j+1 < n && i-1>=0 && a[i-1][j+1] == '*') { //右上 
				count++;
			}
			printf("%d",count); 
		}
	  }
	  printf("\n");
    }
}

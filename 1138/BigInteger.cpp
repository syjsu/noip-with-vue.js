#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int addBigInteger(char *a1,char *b1,char *r) {
	int i;
	int len1 = strlen(a1) - 1;
	int len2 = strlen(b1) -1 ;
	char *a,*b;
	if (len1 < len2) {
		a = b1;
		b = a1;
		int tmp = len1;
		len1  =len2;
		len2 = tmp;
	} else {
		a = a1;
		b = b1;
	} 
	int j = 0; //进位 
	int t; //临时结果，一位一位对应相加 
	for (i=len1;i>=0;i--,len2--) {
		int x1,x2;
		x1 = a[i] - '0'; //获取第一个操作数 
		if (len2 < 0) { //大数1的长度长于大数2的，多余的部分是原来的数值加上进位 
			t = a[i] + j - '0';
			r[i] = (t % 10) + '0';
		} else {
		
		x2 = b[len2] - '0'; //获取第二个操作数 
		t = x1+x2 + j;
		r[i] = (t % 10) + '0';
	  }
	  j = t / 10; //获取进位 
	  if (i == 0 && j != 0) {
			for (i=len1+1;i>0;i--) {
				r[i] = r[i-1];
			}
			r[0] = j + '0';
		}
	}
	return 0;
}

int main(void) {
	char a[10000],b[10000],r[10001];
	scanf("%s%s",&a,&b);
	addBigInteger(a,b,r);
	printf("%s",r);
}



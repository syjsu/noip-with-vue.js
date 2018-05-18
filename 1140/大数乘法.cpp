#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *str) {
	int len = strlen(str);
	int mid = len / 2;
	for (int i = 0;i< mid;i++) {
		char t = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = t;
	}
}

void multiple(char *x1,char *x2,char *r) {
	int len1 = strlen(x1);
	int len2 = strlen(x2);
	int n[len1 + len2 + 1];
	memset(n,0,(len1+len2 + 1) * 4);
	//反转字符串 
	reverse(x1);
	reverse(x2);
	
	for (int i = 0;i<len1;i++) {
		for (int j = 0;j<len2;j++) {
			n[i + j] += (x1[i] - '0') * (x2[j] - '0');
		}
	}
	for (int i = 0;i<=len1+len2;i++) {
		if (n[i] >= 10) {
			n[i+1] += n[i] / 10;;
			n[i] %= 10;
		}
	}
	int flag = 1; //前导零 
	int index = 0;
	for (int i = len1+len2;i>=0;i--) {
		if (n[i] == 0 && flag) {
			continue;
		} else {
		  r[index++] = '0' + n[i];
		  flag = 0;
	    }
	}
	if (index == 0) {
		r[0] = '0';
		r[1] = '\0';
	} else {
		r[index] = '\0';
	} 
}

int main(void) {
	char x1[1001],x2[1001],r[2100];
	scanf("%s%s",&x1,&x2);
	multiple(x1,x2,r);
	printf("%s\n",r);
}

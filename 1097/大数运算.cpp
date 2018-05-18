//作者赵海 
#include <stdio.h>
#include <stdint.h>
#include <string.h>

//大数字加法 
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
	int n;
	scanf("%d",&n);
	char tmp6[10001] = {'1'}; //存储f1 
	char tmp7[10001] = {'1'}; //存储f2 
	char *f1 = tmp6;
	char *f2 = tmp7;
	char *f;
	char tmp[10001]; //存储f2+f2
	char tmp2[10001]; //存储f2+f2+f2，即3f2 
	char tmp3[10001]; //存储2f1 
	char tmp5[10001]; //存储最终结果 
	
	
	for (int i=3;i<=n;i++) {
		//3*f2
		strcpy(tmp,"");
		strcpy(tmp2,"");
		addBigInteger(f2,f2,tmp);
		addBigInteger(f2,tmp,tmp2);
	
		
		//2*f1
		
		strcpy(tmp3,"");
		addBigInteger(f1,f1,tmp3);
		
		strcpy(tmp5,"");
		addBigInteger(tmp2,tmp3,tmp5);
		
		f = tmp5;
		strcpy(f1,f2);
		strcpy(f2,f);
		
	}
	printf("%s\n",f);
}

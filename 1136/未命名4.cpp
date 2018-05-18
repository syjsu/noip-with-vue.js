#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�����ַ��� 
int sort(char *arr) {
	int len = strlen(arr);
	for (int i =0;i<len-1;i++) {
		int k = i;
		for (int j = i+1;j<len;j++) {
			if (arr[k] > arr[j]) {
				k = j;
			}
		}
		if (k != i) {
			char tmp = arr[k];
			arr[k] = arr[i];
			arr[i] = tmp;
		}
	}
}

int cmp(const void * a,const void *b) //qsort��Ҫ�����const  
{  
    return strcmp((char *)a,(char *)b) ; //�ֵ����С����  
    //return strcmp((char *)b,(char *)a) ; //�ֵ���Ӵ�С  
}

int main(void) {
	int n;
	scanf("%d",&n);
	char arr[n][200];
	for (int i = 0;i<n;i++) {
		scanf("%s",&arr[i]);
		sort(arr[i]);
	}
	qsort(arr, n, sizeof(arr[0]) , cmp);  
	int count = 0;
	for (int i = 0;i<n;i++) {
		if (strcmp(arr[i],arr[i+1])) {
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
} 

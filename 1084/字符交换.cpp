//作者赵海 
#include <stdio.h> 
#include <string.h>

//选择排序 
int sort(char *arr) {
	int len = strlen(arr);
	for (int i = 0;i<len-1;i++) {
		int k = i;
		for (int j = i+1;j<len;j++) {
			if (arr[j] < arr[k]) {
				k = j;
			}
		}
		if ( k != i) {
			char tmp = arr[k];
			arr[k] = arr[i];
			arr[i] = tmp;
		}
	}
}

int main(void) {
	int n;
	scanf("%d",&n);
	char buf[1024][1024];
	int k = n;
	while (n-- > 0) {
		//char buf[1024];
		scanf("%s",&buf[n]);
		sort(buf[n]);
	}
	int min = 0;
	for (int i =0;i<k;i++) {
		if (strcmp(buf[min],buf[i]) > 0) {
			min = i;
		}
	}
	printf("%s\n",buf[min]);
}

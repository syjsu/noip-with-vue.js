//�����Ժ� 
#include <stdio.h>

int main(void) {
	int n;
	int l;
	scanf("%d",&n);
		//Ͱʽ����˼�� 
	int buckets[n];
	for (int i = 0;i<n;i++) {
		buckets[i] = 0;
	}
	l = n;
	while (n-->0) {
		int t;
		scanf("%d",&t);
		buckets[t]++; //ͳ�Ƹ�Ԫ�س��ֵĴ��� 
	}
	int max = 0;
	for (int i = 1;i<l;i++) {
		if (buckets[i]  > buckets[max]) {
		   max = i;			
		}
	}
	printf("%d\n",max);
}

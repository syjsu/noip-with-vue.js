//Í°ÅÅĞòË¼Ïë 
#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int arr[n];
	int buckets[10001];
	memset(buckets,0,10001*sizeof(int));
	for (int i = 0;i<n;i++) {
		scanf("%d",&arr[i]);
		buckets[arr[i]]++;
	}
	int index = 1;
	for (int i = 0;i<10001;i++) {
		if (buckets[i] != 0) {
			buckets[i] = index++;
		}
	}
	
	for (int i = 0;i<n;i++) {
		printf("%d ",buckets[arr[i]]);
	}
}

//×÷ÕßÕÔº£ 
#include <stdio.h>
#include <string.h>

int sort(double *arr,int n,int rise) {
	for (int i = 0;i<n-1;i++) {
		int k  = i;
		for (int j = i+1;j<n;j++) {
			if (!rise && arr[k] < arr[j]) {
				k = j;
			} else if (rise && arr[k] > arr[j]) {
				k = j;
			}
		}
		if (k!=i) {
		   double tmp = arr[k];
		   arr[k] = arr[i];
		   arr[i] = tmp;
		}
	}
}

int main(void) {
	int n;
	scanf("%d",&n);
	double male[39];
	double female[39];
	int m =0;
	int f = 0;
	while (n-- >0) {
		char str[10];
		scanf("%s",&str);
		if (!strcmp(str,"male")) {
			scanf("%lf",&male[m++]);
		} else {
			scanf("%lf",&female[f++]);
		}
	}
	sort(male,m,1);
	sort(female,f,0);
	for (int i = 0;i<m;i++) {
		printf("%.2lf ",male[i]);
	}
	for (int i = 0;i<f;i++) {
		printf("%.2lf ",female[i]);
	}
}

#include<stdio.h>
#include<math.h>
int main(){
	int a[10],max=0,min=0,i;
	double sum=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	sum=sum-max-min;
	sum/=8;
	printf("%.3lf",sum);
	return 0;
}

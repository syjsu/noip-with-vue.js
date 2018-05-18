#include<stdio.h>
int main(){
	int n,i,sum=0;
	for( i=0;i<25;i++){
		scanf("%d",&n);
		sum+=n;
	}
	printf("%d",182-sum);
	return 0;
}

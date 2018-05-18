#include<stdio.h>
int n;
int main(){
	int i,j;
	while(scanf("%d",&n)!=EOF){
		for(i=1;i<=n;i++){
			for(j=n-i;j>=1;j--) printf(" ");
			for(j=i*2-1;j>=1;j--) printf("*");
			printf("\n");
		}
	}
}
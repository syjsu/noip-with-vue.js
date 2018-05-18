#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		while(n>0){
			printf("shang:%d ",n/2);
			printf("yu:%d\n",n%2);
			n=n/2;
		}
	}
}
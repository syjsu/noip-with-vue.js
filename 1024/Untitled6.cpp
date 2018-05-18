#include<stdio.h>
#include<math.h>
int main(){
	unsigned int n,count=0,j;
	scanf("%d",&n);
	for(int i=1;i*i<=n;i++){
		if(n==i*i)j=1;
		else j=0;
	}
	if(j==0){
	for(int i=1;i<=floor(sqrt(n));i++){
		if(n%i==0)count++;
	}
	printf("%d",2*count);
}
if(j==1){
	for(int i=1;i<=floor(sqrt(n)+0.5);i++){
		if(n%i==0)count++;
	}
	printf("%d",2*count-1);
	
}
	return 0;
}

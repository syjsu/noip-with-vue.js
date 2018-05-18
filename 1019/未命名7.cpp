#include<stdio.h>
int main(){
float x;
	while(scanf("%f",&x)!=EOF){ 
	if(x>=0&&x<5){
		printf("%.3f",x+2.5);
	}
	if(x>=5&&x<10){
		printf("%.3f",2-1.5*(x-3)*(x-3));
	}
	if(x>=10&&x<20){
		printf("%.3f",x/2-1.5);
	}
}
}

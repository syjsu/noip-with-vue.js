#include<stdio.h>
	int main(){
		int a=0,b=0;
		float x;
		while(scanf("%f",&x)!=EOF){
			if(x<=0.5){
				a=3;
				printf("%d\n",a);
			}
			
		else{
		
				printf("%.0lf\n",(x-0.5)/0.2+3);
			}
		}
	} 
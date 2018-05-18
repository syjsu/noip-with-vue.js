#include<stdio.h>
	int main(){
		int x,a,b,c,d,num;
		while(scanf("%d",&x)!=EOF){
			a=x%10;
			b=x/10%10;
			c=x/100%10;
			d=x/1000%10;	
			if(x>=1&&x<10){
			num=1;		
			printf("%d\n%d\n",num,a);
			}
			if(x>=10&x<100){		
			num=2;
			printf("%d\n%d\n%d\n",num,b,a);
			}
			if(x>=100&&x<1000){		
			num=3;
			printf("%d\n%d\n%d\n%d\n",num,c,b,a);
			}	
			if(x>=1000&&x<10000){		
			num=4;
			printf("%d\n%d\n%d\n%d\n%d\n",num,d,c,b,a);
			}
		
		}
	
	
	}
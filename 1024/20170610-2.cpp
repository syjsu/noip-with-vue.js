#include<stdio.h>
int main(){
	int tmp;
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
	if(c>d){
		tmp=c;
		c=d;
		d=tmp;
	}
	if(a>c){
		tmp=a;
		a=c;
		c=tmp;
	}
	if(b>d){
		tmp=b;
		b=d;
		d=tmp;
	}
	if(b>c){
		tmp=b;
		b=c;
		c=tmp;
	}
	printf("%d %d %d %d",a,b,c,d);
	getchar();
	getchar();
	return 0;
}

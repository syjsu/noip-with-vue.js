#include<stdio.h>
int main(){
	char n;
	while(scanf("%c",&n)!=EOF){
		char a;
		a='a'+'z'-n;
		printf("%c\n",a);
	}
}
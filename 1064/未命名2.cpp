#include<stdio.h>
int a[35];
int f(int n){
	if(n==1) return a[1];
	if(n==2) return a[2];
	if(n>2) return f(n-1)+f(n-2);
}                                //by 王志城 
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		a[1]=0;
		a[2]=1;
		for(int i=3;i<=n;i++) a[i]=a[i-1]+a[i-2];
		int t;
		t=f(n);
		printf("%d\n",t);	
	}
}								//by 王志城 
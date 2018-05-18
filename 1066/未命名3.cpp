#include<stdio.h>
int main(){
	int n,i,j;
	int a[10005];
	int b[10005];
	while(scanf("%d",&n)==1){
		int s=1;
		for(i=2;i<=n;i++){
			for(j=2;j<=i/2;j++){
				if(i%j==0) break;
			}
			if(j>i/2){
				b[s]=i;
				s++;
			}
		}
		//for(i=1;i<=s-1;i++) printf("%d ",b[i]);
		for(i=1;i<s;i++){
			if(b[i]+2==b[i+1]) printf("%d %d\n",b[i],b[i+1]);
		}
	}
}
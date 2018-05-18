#include<stdio.h> 
	int main(){
		int n,i,c,j;
		while(scanf("%d",&n)!=EOF){
			if(n==1){
				
				j=1;
			}
			else{
				
				j=2;
			}
			for(i=2;i<=n/i;i++){
				if (!(n%i)) {
				if (i==n/i){
				j++;
				}
			else{
				j+=2;
			}
		}
				
			}
			printf("%d\n",j);
		}
	
	}
	
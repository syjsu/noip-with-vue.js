#include<iostream>
#include<cstdio>
using namespace std;
int a[1001],n;
bool b[1001];
void search(int);

int main(){
	scanf("%d",&n);
	search(1);
	return 0;
}

void search(int k){
	for(int i=1;i<=n;i++){
		if(!b[i]){
			a[k]=i;
			b[i]=1;
			if(k==n){
				for(int j=1;j<=n;j++){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
			else{
				search(k+1);
			}
			b[i]=0;
		}
	}
}

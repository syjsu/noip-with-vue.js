#include<stdio.h>
int a[5][5];
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++) scanf("%d",&a[i][j]);
	}
	int s1=0,s2=0;
	s1=a[1][1]+a[2][2]+a[3][3]+a[4][4];
	s2=a[4][1]+a[3][2]+a[2][3]+a[1][4];
	printf("%d ",s1);
	printf("%d\n",s2);
}
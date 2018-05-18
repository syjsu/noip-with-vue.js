#include<stdio.h>
	int a[100];
	int main(){
		double h;		
		int i,b=0,s=1000;
		

	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>b) b=a[i];
		if(s>a[i]) s=a[i];
		h=h+a[i];
		
	}
	h=(h-b-s)/8;
	printf("%.3f",h); 
			
	
	}
	
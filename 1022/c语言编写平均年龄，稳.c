include <stdio.h>
 int main(){
	 int n=0;
	 int i=0;
	 int age=0;
	 int sum=0;
	 float x=0;
	 printf("请输入班级人数：\n");
	 scnaf("%d",&n);
	 if(1<=n&&100>=n){
		 for(0;i<=n;i++){
			 scanf("%d",age);
			 sum=sum+age;
		 }
		  x=sum/n;
		  printf("平均年龄为：\n");
		  printf(".2f",x);
	 }else{
		 printf("你的输入范围过大\n");
	 }
	 
 }
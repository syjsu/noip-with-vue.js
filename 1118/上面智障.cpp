#include<stdio.h>
int main()
{
	int a,b,i,ios;
	printf("坑人小游戏第二季\n");
	printf("选择人物：1.神，2.魔\n");
	scanf("%d",&a);
	if(a==1){
		printf("你遇见了一个周二狗");
		printf("选择技能");
		scanf("%d",&b);
		if(b>=10)
		printf("你用了二技能淫贱，淫了周二狗     "); 
		else printf("你挂了    "); 
	}
	else{
		printf("你遇见了一个周大狗  \n");
		printf("选择技能");
		scanf("%d",&b);
		if(b>=10){
		for(i=1;i<=50;i++)
		printf("你用了二技能淫贱，淫了周大狗   ");
		}
		else {
		for(i=1;i<=50;i++)
		printf("你挂了,你个傻逼   "); 
		printf("才怪");
		printf("你要干什么 1.跳楼 2.淫周大狗") ; 
		scanf("%d",&ios);
		if(ios==1){
			printf("有病吧，没事跳楼"); 
		}
		if(ios==2){
			printf("你忍辱负重的活了下来\n"); 
			printf("和周大狗成亲了");
		}
		}
	}
	return 0; 
 } 

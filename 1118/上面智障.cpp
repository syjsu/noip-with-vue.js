#include<stdio.h>
int main()
{
	int a,b,i,ios;
	printf("����С��Ϸ�ڶ���\n");
	printf("ѡ�����1.��2.ħ\n");
	scanf("%d",&a);
	if(a==1){
		printf("��������һ���ܶ���");
		printf("ѡ����");
		scanf("%d",&b);
		if(b>=10)
		printf("�����˶����������������ܶ���     "); 
		else printf("�����    "); 
	}
	else{
		printf("��������һ���ܴ�  \n");
		printf("ѡ����");
		scanf("%d",&b);
		if(b>=10){
		for(i=1;i<=50;i++)
		printf("�����˶����������������ܴ�   ");
		}
		else {
		for(i=1;i<=50;i++)
		printf("�����,���ɵ��   "); 
		printf("�Ź�");
		printf("��Ҫ��ʲô 1.��¥ 2.���ܴ�") ; 
		scanf("%d",&ios);
		if(ios==1){
			printf("�в��ɣ�û����¥"); 
		}
		if(ios==2){
			printf("�����踺�صĻ�������\n"); 
			printf("���ܴ󹷳�����");
		}
		}
	}
	return 0; 
 } 

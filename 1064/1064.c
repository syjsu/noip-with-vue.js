#include<stdio.h>

int q,a;
long b[31];


int Math()
{
	//printf("%d \n",q);
	b[q]=b[q-1]+b[q-2];
	q++;
	//printf("b[%d]=%d+%d=%d \n\n",q-1,b[q-2],b[q-3],b[q-1]);
	if(q==a+1)
	{
		printf("%d",b[q-1]);
	}
	else Math();
}

int main()
{
	scanf("%d",&a);
	b[1]=0;b[2]=1;
	q=3;
	if(a==1)printf("0\n");
	if(a==2)printf("1\n");
	if(a!=1 && a!=2)Math();
	//system("pause");
	return 0;
}

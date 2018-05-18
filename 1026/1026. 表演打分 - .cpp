#include<cstdio>
void swap(int*,int*);//交换两个int类型的数 
void inorder(int*);//给数据排序 
int main()
{
	float s=0;
	int i,grade[10];
	//==================（输入10个整数） 
	for(i=0;i<10;i++) 
	{
		scanf("%d",&grade[i]);
	}
	//====================
	inorder(grade); /*====================
	//(本调试块用于检查是否完成了排序) 
	for(i=0;i<10;i++)
	{
		printf("%d\n",grade[i]);
	}//=====================================//*/
	grade[0]=grade[9]=0;
	//=====================(求和)
	for(i=1;i<=8;i++)
	{
		s=s+grade[i];
	}
	//=====================
	s=s/8.0;//计算平均值 
	printf("%.3f",s);//输出并保留3位小数 
}
void swap(int* a,int* b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void inorder(int* grade)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(*(grade+i)<*(grade+j))
			{
				swap((grade+i),(grade+j));
			}
		}
	}
}

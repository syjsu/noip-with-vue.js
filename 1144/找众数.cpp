#include<cstdio>
int main()
{
	int i,cp=0,j,n;
	int c,b[1001]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&c);//����n���� 
	    b[c]++;//�����д������c���ֵĴ��� 
	}
	for(i=0;i<1001;i++)
	{
		if(b[i]>cp)//�Ƚϳ��ִ��������� ����������±�Ϊ��������c 
		{
			cp=b[i];
			j=i;
		}
	}
	printf("%d",j);
	return 0;
}

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char min[201],a[201];
	int i=-1,j=0,z=0,mcount=0,temp=0,iff=0;//iff���ж��Ƿ�Ϊ��һ������ 
	while(1)
	{
		i++;
		scanf("%c",&a[i]);
		if(a[i]=='.')
			break;
	}
	while(j<i)
	{
		if(iff==0)
			min[z]=a[j];
		if((a[j]>=65 && a[j]<=90) || (a[j]>=97 && a[j]<=122))//��¼��һ�� 
		{
			if(iff==0)
				mcount++;//��һ��Ҫ�ȼ�Ϊ��С�ģ��������ıȽ� 
			else
				temp++;//temp��¼����� 
		}
		if(a[j]==32)
		{
			if(mcount>temp)//��Сֵ������ֵ�� 
			{
				if(iff!=1 && iff!=0) //���ǵ�һ���� 
				{
					mcount=temp;//�滻 
					for(int la=0;la<mcount;la++)
						min[la]=a[j];//Ϊʲôj-1������⣨������ĳ�a[j]���ԣ��϶���~����������������ֲ�ͬ��������ԣ�����������ϵ㣨��������㲻����ԣ�debug���� 
					temp=0;
				}
				else
					iff++;//��һ�����Ǽ�Ϊ��Сֵ�ģ���Ϊ���ǵ�һ�� 
			}
			temp=0;z=-1;iff++;//zΪ-1��Ϊ��������z++��Ȼ�ʹ�1��ʼ�ˣ�Ӧ����0�� 
		}
		j++;z++; 
	}
	for(i=0;i<mcount;i++)
		cout<<min[i];
	return 0;
}

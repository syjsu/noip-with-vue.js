#include<cstdio>
int main()
{
	int i,cp=0,j,n;
	int c,b[1001]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&c);//输入n个数 
	    b[c]++;//数组中存的是数c出现的次数 
	}
	for(i=0;i<1001;i++)
	{
		if(b[i]>cp)//比较出现次数最多的数 ，则该数的下标为所求众数c 
		{
			cp=b[i];
			j=i;
		}
	}
	printf("%d",j);
	return 0;
}

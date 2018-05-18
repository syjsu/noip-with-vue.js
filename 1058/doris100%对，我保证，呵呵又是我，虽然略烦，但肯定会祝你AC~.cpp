#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char min[201],a[201];
	int i=-1,j=0,z=0,mcount=0,temp=0,iff=0;//iff是判断是否为第一个单词 
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
		if((a[j]>=65 && a[j]<=90) || (a[j]>=97 && a[j]<=122))//记录第一个 
		{
			if(iff==0)
				mcount++;//第一个要先记为最小的，再与后面的比较 
			else
				temp++;//temp记录后面词 
		}
		if(a[j]==32)
		{
			if(mcount>temp)//最小值比现在值大 
			{
				if(iff!=1 && iff!=0) //不是第一个词 
				{
					mcount=temp;//替换 
					for(int la=0;la<mcount;la++)
						min[la]=a[j];//为什么j-1自行理解（不信你改成a[j]调试，肯定错~），你可以试试两种不同情况，调试，在这里设个断点（别告诉我你不会调试（debug）） 
					temp=0;
				}
				else
					iff++;//第一个词是记为最小值的，记为不是第一次 
			}
			temp=0;z=-1;iff++;//z为-1因为下面又有z++不然就从1开始了（应该是0） 
		}
		j++;z++; 
	}
	for(i=0;i<mcount;i++)
		cout<<min[i];
	return 0;
}

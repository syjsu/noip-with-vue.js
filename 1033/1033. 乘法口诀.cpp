//本程序由LNF_297提供 
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,j;
	line1:	cin>>n;
	if(n>=10)
	{
		cout<<"请重新输入输入一个小于等于9的数"<<endl;
		 goto line1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d ",j,i,i*j);
		}
		cout<<endl;
	}
	return 0;
}

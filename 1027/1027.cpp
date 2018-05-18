#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int u,a[1000000],sum=1,k=0;
	cin>>u;
	int y=u;
	while(1)
	{
		if(y/10==0)break;
		else 
		{
			sum++;
			y/=10;
		}
	}
	for(int i=sum;i>=1;i--)
	{
		a[i]=u/(pow(10,i)/10);
		a[i]%=10;
		k+=a[i];	
	}
	printf("%d",k);
	return 0;
} 

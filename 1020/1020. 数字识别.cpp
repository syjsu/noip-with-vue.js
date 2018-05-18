#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int num,x[4],i,count=0,j=0;
	cin>>num;
	for(i=3;i>=0;i--)
	{
		if(!(int)(num/pow(10,i))==0)
		{
			j=j*10;
			x[i]=num/pow(10,i)-j;
			j=j+x[i];
			count++;
		}else
		{
			x[i]=0;
		}
	}
	cout<<count<<endl;
	for(i=count-1;i>=0;i--)
	{
		cout<<x[i]<<endl;
	}
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main(void)
{
	int x,num=1,t;
	cin>>x;
	t=x;
	for(int i=0;i<4;i++)
	{	
		if(t/10==0)
		{
			break;
		}
		t=t/10;
		num++;
	}
	cout<<num<<endl;
	if(num==4)
	{
		cout<<t<<endl<<(x%1000)/100<<endl<<(x%100)/10<<endl<<(x%10)<<endl;
	}
	else if(num==3)
	{
		cout<<t<<endl<<(x%100)/10<<endl<<(x%10)<<endl;
	}
		else if(num==2)
	{
		cout<<t<<endl<<(x%10)<<endl;
	}
	else cout<<x<<endl;
	return 0;
}

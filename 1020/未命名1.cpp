#include<iostream>

using namespace std;
int b[5];
int main()
{
	for(int i=0;i<5;i++)
	b[i]=-1;
    int x,tot=0;
    cin>>x;int a=x;
    for(int i=1;i<=4;i++)
    {
        x/=10;tot++;
        if(x==0)break;
	}
	cout<<tot<<endl;
	for(int i=4;i>0;i--)
	{
		if(a==0)break;
	    b[i]=a%10;
		a/=10;
	}
	for(int i=1;i<5;i++)
    if(b[i]!=-1)cout<<b[i]<<endl;
	return 0;
}

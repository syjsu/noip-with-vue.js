#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,c,sum=0;
    double b;
    cin>>a;
    c=a;
    for (int i=1;i<=3;++i)
    {
    	b=a%10;
    	sum+=b*b*b;
    	if (i==3&&sum==c)
    	{
    		cout<<"YES";
    	}
    	if (i==3&&sum!=c)
    	{
    		cout<<"NO";
    	}
    	a=a/10;
    }
	return 0;
}

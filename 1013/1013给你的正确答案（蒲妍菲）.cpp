#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<ctime>
#include<cctype>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
	if(a+b<=c)
	{
		cout<<"NO"<<endl;
	}
	else
	{
	    if(a+c<=b)
		{
		    cout<<"NO"<<endl;
		}
    else
		if(b+c<=a)
		{
		    cout<<"NO"<<endl;
		}
	else
		if((a==b)&&(b==c))
		{
		cout<<"Equilateral"<<endl;
		}
	else
		if(a*a+b*b==c*c)
		{
		cout<<"Right"<<endl;
		}
	else
	{
		cout<<"General"<<endl;
	}
}
    return 0;
}

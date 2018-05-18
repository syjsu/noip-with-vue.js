#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double l,a1,a2,a3,a4,a5,a6;
	cin>>l;
	if(l<=100000)
	{
	a1=l*0.1;
	cout<<a1;
}
	else
	if(l>100000&&l<=200000)
{
	a2=(l-100000)*0.075;
	cout<<a2+a1;
}
    else
    if(l>200000&&l<=400000)
 {
    a3=(l-200000)*0.05;
    cout<<a1+a2+a3;
}
else
if(l>400000&&l<=600000)
{
	a4=(l-400000)*0.03;
	cout<<a1+a2+a3+a4;
}
else
if(l>600000&&l<1000000)
{
a5=(l-600000)*0.015;
cout<<a1+a2+a3+a4+a5;
}
else
if(l>=1000000)
{a6=(l-1000000)*0.01;
cout<<a1+a2+a3+a4+a5+a6;
}
return 0;
}



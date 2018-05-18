/*输入
输入一行三个用空格隔开的正整数a,b,c，表示三角形的三条边长。
输出
输出对应三角形的类型，如果不能构成三角形，输出“NO”，如果
是等边三角形输出“Equilateral”，如果是直角三角形输出“Right”，
其他三角形则输出“General”。
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

int a,b,c;
cin>>a>>b>>c;
if(a>b)
	swap(a,b);
if(b>c)
	swap(b,c);
if(a>b)
	swap(a,b);


if((a+b)>c)
	{
	
	if(a==b&&b==c)
		{
		cout<<"Equilateral"<<endl;
		return 0;
		}
	
	if(a*a+b*b==c*c)
		{
		cout<<"Right"<<endl;
		return 0;
		}
	
	cout<<"General"<<endl;
	
	return 0;
	}

else
	cout<<"NO";
	
return 0;
}

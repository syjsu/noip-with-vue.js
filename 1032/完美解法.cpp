#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{	int a;
cin>>a;
for (int i=1;i<=a;i++)
{   for (int x=a-i;x>0;x--)
{
	cout<<" ";
}
for (int j=1;j<=2*i-1;j++)
{
	cout<<j;
}
cout<<endl;
}
for (int i=a-1;i>=1;i--)
{   for (int x=a-1;x>=i;x--)
{
	cout<<" ";
}
for (int j=1;j<=2*i-1;j++)
{
	cout<<j;
}
cout<<endl;
}
return 0;
}
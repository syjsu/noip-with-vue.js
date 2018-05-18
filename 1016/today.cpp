#include<iostream>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int b,c;
	cin>>b>>c;
	if (b%400==0||b%4==0&&b%100!=0) a[2]=29;
	cout<<a[c];
}

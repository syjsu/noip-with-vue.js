#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int s;
	cin>>s;
	if (s>=90)
	{
		cout<<"Excellent"<<endl;
	}
	else if (s>=80)
	{
		cout<<"Good"<<endl;
	}
	else if (s>=60)
	{
		cout<<"Pass"<<endl;
	}
	else 
	{
		cout<<"Fail"<<endl;
	}
	
	return 0;

}
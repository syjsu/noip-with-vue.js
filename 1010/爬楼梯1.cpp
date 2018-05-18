#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<=10) printf("%.2f",0.2+0.8*a);
	else if(a<=20) printf("%.2f",8.2+(a-10)*0.75);
	else if(a<=30) printf("%.2f",15.7+(a-20)*0.7);
	else if(a>30) cout<<"Fail";
	
	return 0;

}
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int b=0;
	long a;
	cin>>a;
	for(int i=1;i<=sqrt(a);i++)
	if(a%i==0){
	b+=2;
	if(i==sqrt(a))b-=1;
	}
	cout<<b<<endl;
	return 0;	
}

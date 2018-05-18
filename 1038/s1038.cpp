#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int s[13]={0},sr;
	for(int a=0;a<25;a++)
	{
		cin>>sr;
		s[sr-1]++;
	}
	for(int a=0;a<13;a++)
	{
		if(s[a]!=2)
			cout<<a+1<<endl;
	}
	return 0;
}

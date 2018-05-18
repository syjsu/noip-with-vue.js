#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int score;
	cin>>score;
	if (score>=90)
	{
		cout<<"Excellent";
	}
	if (80<=score&&score<90)
	{
		cout<<"good";
	}
	if (60<=score&&score<80)
	{
		cout<<"Pass";
	}
	if (score<60)
	{
		cout<<"Fail";
	}
	return 0;
}

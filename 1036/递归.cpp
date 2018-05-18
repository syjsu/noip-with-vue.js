#include<iostream>
#include<cstdio>
using namespace std;

void change(int a);

int main()
{
	int n;
	cin>>n;
	change(n);
	return 0;
}

void change(int a)
{
	int s,y;
	s=a/2;
	y=a%2;
	printf("shang:%d yu:%d\n",s,y);
	if(s==0)
		return;
	change(s);
}

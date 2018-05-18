#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(void)
{
	int a,x,y,z,q=0,w=0,e=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>x>>y>>z;
		q=q+x;
		w=w+y;
		e=e+z;
	}
	cout<<q<<" "<<w<<" "<<e<<" "<<q+w+e;
	return 0;
}

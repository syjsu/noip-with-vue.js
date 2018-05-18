#include<iostream>
#include<cstdio>
using namespace std;

int Euclidean(int a,int b);

int main()
{
	int n,m;
	cin>>n>>m;
	if(Euclidean(n,m)==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

int Euclidean(int a,int b)
{
	return a%b ? Euclidean(b,a%b):b;
}

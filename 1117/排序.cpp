#include<iostream>
#include<algorithm>
using namespace std;
int comp(int &a,int &b)
{
	return a<b;
}
int main()
{
	int a[10001],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a+0,a+n-1,comp); 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0; 
}

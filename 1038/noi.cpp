#include<iostream>
using namespace std;

int main()
{
	int i,s=0,x;
	for (i=1; i<=25; i++)
	{
		cin>>x;
		s+=x;
	}
	cout<<182-s<<"\n";
	return 0;
}

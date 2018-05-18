#include<iostream>
using namespace std;
int main()
{
	int a,b=1;
	cin>>a;
	for (int i=1;i<=a;++i)
	{
		for (int j=1;j<=a-i;++j)
		{
			cout<<" ";
		}
		for (int j=1;j<=b;++j)
		{
			cout<<"*";
		}
		cout<<endl;
		b+=2;
	}
	return 0;
}

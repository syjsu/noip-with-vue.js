#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int x=1;x<=n;x++)
	{
		for(int y=1;y<=x;y++)
		{
			cout<<y<<"*"<<x<<"="<<x*y<<" ";
		}
		cout<<endl;
	}		
	return 0;
}

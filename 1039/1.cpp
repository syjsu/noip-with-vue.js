#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,s=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s*=2;
	}
	cout<<s<<endl;
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int n,h,i,j=1,s;
	cin>>n;
	for(h=1;h<=n;h++)
	{
		for(i=1;i<=h;i++)
			cout<<i<<"*"<<j<<"="<<i*j<<" ";
		j++;
		cout<<endl;
	}
	return 0;
}

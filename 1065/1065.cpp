#include<iostream>
using namespace std;
int main()
{

	int m,n,r,s;
	cin>>m>>n;
	s=m*n;
	r=m%n;
	while(r)
	{
		m=n;
		n=r;
		r=m%n;
	}
	cout<<s/n;
	
	return 0;
	
}

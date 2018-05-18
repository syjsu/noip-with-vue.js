#include<iostream>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	while(n>0)
	{
		k=k+n%10;
		n/=10;
	    if(n==0&&k>10)
	    {
			n=k;
	        k=0;
	    }
	}
	cout<<k;
	return 0;
}

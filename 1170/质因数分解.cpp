#include<iostream>
using namespace std;
int n,i=2,ans;
int main()
{
	cin>>n;
	while(i*i<n)
	{
		while(n%i==0)
		{
			cout<<i<<'*';
			n/=i;
		}
		i++;
	}
	cout<<n;
	return 0;
}

#include<iostream>
using namespace std;
int dg(int n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n=n/10;
		}
	if(s>=10)
	dg(s);
	if(s<10)
	return s;
} 
int main()
{
	int n,q;
	cin>>n;
    n=dg(n);
	cout<<n;
	return 0;
}

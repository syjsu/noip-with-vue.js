#include<iostream>
using namespace std;
int n,a,b[1001],i,j,l=0,s;
int main()
{
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		b[a]++;
	}
	for(i=1;i<=1000;i++)
	{
		if(b[i]>l)
		{
			s=i;l=b[i];
		}
	}
	cout<<s;
	return 0;
}


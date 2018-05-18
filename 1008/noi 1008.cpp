#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,n1,n2,n3,sum,k1=1,k2=1,k3=1;
	cin>>n;
	n1=n%10;
	n2=(n/10)%10;
	n3=n/100;
	for(int i=0;i<3;i++)
	{
		k1*=n1;
		k2*=n2;
		k3*=n3;
	}
	sum=k1+k2+k3;
	//cout<<sum;
	if(sum==n)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}

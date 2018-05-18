#include<iostream>
using namespace std;
int main()
{
	long long a,b,sum=0;
	cin>>a;
	while (a)
	{
		b=a%10;
		a=a/10;
		sum+=b;
	}
	cout<<sum;
	return 0;
}                                                                               

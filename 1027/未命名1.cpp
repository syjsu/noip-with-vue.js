#include<iostream>
using namespace std;
long long a,b,c;
int main()
{
	cin>>a;
	while (a!=0)
	{
		c=a%10;
		a=a/10;
		b=b+c;
	}
	cout<<b;
	return 0;
}

#include<iostream>
using namespace std;
long long a,b,c;
int main()
{
	cin>>a>>b;
	a=a%10;c=a;
	for(int i=1;i<b;i++)
	{
		a=a*c;
		if(a>10) a=a%10;
	}
	cout<<a;
	return 0;
}

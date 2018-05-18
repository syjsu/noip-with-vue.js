#include<iostream>
using namespace std;
int main()
{
	long long a,b,i;
	cin>>a>>b;
	do
	{
		i=a%b;
		a=b;
		b=i;
	}
	while(i);
	if(a==1)cout<<"Yes";
	else cout<<"No";
	return 0;
}

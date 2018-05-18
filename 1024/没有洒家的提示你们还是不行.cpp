#include<iostream>
#include<cmath>
using namespace std;
int b=0;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(i==sqrt(n))
			b++;
			else b=b+2;
			}
		}
		cout<<b;
		return 0;
}

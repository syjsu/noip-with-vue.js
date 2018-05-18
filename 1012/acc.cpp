#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a;
	int b;
	cin>>a;
	if(97<=a%123&&a%123<=122)
	{
		b=a%123;
		cout<<(char)b;
		return 0;
	}
	else if(65<=a%91&&a%91<=90)
	{
		b=a%91;
		cout<<(char)b;
		return 0;
	}
	else
	{
		cout<<'*';
		return 0;
	}
} 

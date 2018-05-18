#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int s, a;
	char c;
	cin>>s;
	while (cin>>c)
	{	
	    if (c!='+')	break;
		cin>>a;
		s+=a;
	
	}
	cout<<s;
	return 0;
}

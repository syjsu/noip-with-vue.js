#include<iostream>
using namespace std;

int main()
{
    long long a,b=0;
	for(int i=1;i<26;i++)
	{
		cin>>a;
		if(a>13) return 0;
		b+=a;
	}
	cout<<2*(1+2+3+4+5+6+7+8+9+10+11+12+13)-b<<endl;
	return 0;
}

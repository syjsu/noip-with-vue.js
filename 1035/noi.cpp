#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
	int i,m,n,s,x;
	cin>>n;
	while(n>=10)
	{
		m=n;
		s=0;
		while(m>0)
		{
			
		    x=m%10;
	        m/=10;
	        s+=x;
	    }
	    n=s;
	}
	cout<<n<<"\n";
	return 0;
}

#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	long long a,n,i,j;
	j=0;
	cin>>n;
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(i*i<n)
				j+=2;
			else
				j++;	
		}
	}
			
	cout<<j;
	return 0;
}

		


#include <iostream>
using namespace std;
int main( )
{
	int i,n=0,j=1,k;
	cin>>k;
	for (i=1;i<=k-2;i++)
	{
		if(i%2==1)
			n+=j;
		else
			j+=n;
	}
	if(k%2==1)
		cout<<n;
	else
		cout<<j;
	return 0;
}

//Ìî³ä¾ØÕó
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n, m, a, sum, nmin, mmax;
	
	cin>>n>>m>>a;
	
	nmin = min(n, m);
	mmax = max(n, m);
	sum = (nmin-nmin%a) * (mmax-mmax%a);
	
	if(nmin < a)
	{
		sum = 0;
	}
	cout<<sum/(a*a)<<endl;
	
	return 0;
}

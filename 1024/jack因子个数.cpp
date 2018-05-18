#include <bits/stdc++.h>
using namespace std;
//约数个数定理
/*
1                   1
1 2                 2
1 2 3               2
1 2 3 4            -3
1 2 3 4 5           2
1 2 3 4 5 6         4
1 2 3 4 5 6 7       2
1 2 3 4 5 6 7 8     4
1 2 3 4 5 6 7 8 9  -3
*/

int main()
{
	unsigned long long n, num, i;
	double sq;
	
	cin>>n;
	
	sq = sqrt(n);
//cout<<(int) sq<<endl;
	if(sq - (int)sq == 0)
		num = 1;
	else
		num = 0;
//cout<<num<<endl;
	for(i=1; i<(int)sq; i++)
	{
		if(n % i == 0)
			num += 2;
	}
	
	if(sq - (int)sq > 0 && n%(int)sq == 0)
		num += 2;
	
	cout<<num;
	
	return 0;
}

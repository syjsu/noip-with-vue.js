#include <bits/stdc++.h>
using namespace std;

int main()
{
	float money;
	float minute = 3;
	cin>>money;
	
	if(money >0.5)
		minute += (money-0.5)/0.2;
		
	cout<<ceil(minute);

	return 0;
}

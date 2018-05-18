#include <bits/stdc++.h>
using namespace std;

int main()
{
	float x, y = 0;
	cin>>x;
	
	if(x>=0 && x<5)
		y = x+2.5;
	else if(x<10)
		y = 2- 1.5*(x-3)*(x-3);
	else if(x<20)
		y = x/2 - 1.5;

	printf("%.3f", y);

	return 0;
}

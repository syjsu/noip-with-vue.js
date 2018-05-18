#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	float x, y;

	cin>>x>>y;
	
	if(fabs(x) <=1 && fabs(y)<=1)
		cout<<"Yes";
	else
		cout<<"No";
	
	return 0;
}

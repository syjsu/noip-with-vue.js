#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	
	cin>>a>>b>>c;
	
	if(a+b<=c || a+c<=b || b+c<=a)
		cout<<"NO";
	else if(a==b && b==c)
		cout<<"Equilateral";
	else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		cout<<"Right";
	else
		cout<<"General";
	
	return 0;
}

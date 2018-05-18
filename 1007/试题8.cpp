#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,r,k;
	cin>>a>>b;
	k=int(a)/int(b);
	r=a-b*k;
	cout<<fixed<<setprecision(2)<<r<<endl;
	return 0;
}

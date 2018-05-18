#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c,d;
	cin>>a>>b>>c;
	d=(a/c)*(b/c);
	cout<<fixed<<setprecision(4)<<d;
	return 0;
}

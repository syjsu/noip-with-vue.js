#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	cin>>a;
	a=(a-32)/1.8;
	cout<<fixed<<setprecision(4)<<a;
	return 0;
}

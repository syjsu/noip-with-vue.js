#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double f,c;
	cin>>f;
	c=5*(f-32)/9;
	cout<<fixed<<setprecision(4)<<c;
}

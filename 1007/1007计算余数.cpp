#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,r;
	a=3;
	b=2;
	r=a%b;
	double f;
	f=r;
	cout<<fixed<<setprecision(2)<<f<<endl;
	return 0;
}

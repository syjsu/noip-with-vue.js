#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a,R,X,P;
	cin>>R>>X>>P;
	a=(100+R)/100.0;
	cout<<fixed<<setprecision(2)<<X*pow(a,P);
	return 0;
} 

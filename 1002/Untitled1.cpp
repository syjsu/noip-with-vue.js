#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
	cin>>a>>b>>c;
	int s=(a+b+c)/2.00;
	cout<<fixed<<setprecision(4)<<sqrt(s*(s-a)*(s-b)*(s-c));
	return 0;
}

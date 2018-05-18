#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,k;
	float r;
	cin>>a>>b;
	k=int(a/b);
	r=a-b*k;
	cout <<setprecision(2) <<std::fixed<<r;
}

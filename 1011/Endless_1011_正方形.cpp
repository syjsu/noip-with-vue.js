#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double x,y;
	cin>>x>>y;
	if (abs(x)+abs(y) <=2)
		cout<<"Yes";
	else cout<<"No";

	return 0;
}

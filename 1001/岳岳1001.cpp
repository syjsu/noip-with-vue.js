#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float F, C;
	cin >> F;
	C=(F-32)/9*5;
	
	cout.flags(ios::fixed);
	cout.precision(4);
	cout<<C;
	
	return 0;
}

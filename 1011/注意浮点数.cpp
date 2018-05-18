#include <bits/stdc++.h>
using namespace std;

int main() {
	double x,y;
	cin >> x >> y;
	if (x >= -1 and x <=1 and y>= -1 and y <= 1){
			cout << "Yes";
			return 0;
	}
	cout << "No";
	return 0;
}
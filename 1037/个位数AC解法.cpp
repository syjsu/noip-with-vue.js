#include <iostream>

using namespace std;

int  main() {
	long long a,b,c;
	cin >> a >> b;
	a = a - a/10*10;
	c = a;
	for (int i=1;i<b;++i) {
		c *= a;
		if (c>10) c = c-c/10*10;
	}
	cout << c;
	return 0;
}

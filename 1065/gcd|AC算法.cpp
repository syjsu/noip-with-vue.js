#include <iostream>

using namespace std;

long long gcd (long long n,long long m) {
	long long rem = n%m;
	if (rem == 0)
		return m;
	else
		return gcd(m,rem);
}

int main() {
	long long n,m,s;
	cin >> n >> m;
	s = gcd(n,m);
	n/=s;
	m/=s;
	cout << n*m*s;
	return 0;
}

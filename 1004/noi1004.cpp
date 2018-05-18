#include <iostream>
using namespace std;

int main()
{
	int m, n, a;
	long long result;
	cin >> m >> n >> a;

	result = (long long)(m / a) * (n / a);
	cout << result;
	return 0;
}


#include	<iostream>
#include	<cstdint>

using namespace std;

long long n, f, mx = INT64_MIN, a;

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		f += a;
		mx = f > mx ? f : mx;
		f = f > 0 ? f : 0;
	}
	cout << mx << endl;
}

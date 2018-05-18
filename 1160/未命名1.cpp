#include	<iostream>

using namespace std;

int f[10001];

int main()
{
	int n, t, w = 0, v = 0;
	cin >> n >> t;
	for(int i = 1; i <= t; i++)
	{
		cin >> w >> v;
		for(int j = w; j <= n; j++)
		{
			f[j] = f[j - w] + v > f[j] ? f[j - w] + v : f[j];
		}
	}
	cout << f[n] << endl;
}

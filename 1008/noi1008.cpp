#include <iostream>
using namespace std;

int main()
{
	int in, t, bit, sum = 0;
	cin >> in;

	t = in;
	for (int i = 0; i < 3; i++)
	{
		bit = (t % 10);
		sum += (bit * bit * bit);
		t /= 10;
	}
	cout << (sum == in ? "YES" : "NO");
	return 0;
}


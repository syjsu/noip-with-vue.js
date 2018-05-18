#include	<iostream> 
#include	<string>
#include	<algorithm>

using namespace std;

int s[3];

int main()
{
	int n;
	cin >> n;
	s[0] = 0; s[1] = 0; s[2] = 1;
	for(int i = 3; i <= n; i++)
	{
		s[i % 3] = (i - 1) * (s[(i - 1) % 3] + s[(i - 2) % 3]);
	}
	cout << s[n % 3] << endl;
}

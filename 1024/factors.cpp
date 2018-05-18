#include <iostream>

using namespace std;

int main ()
{
	long s,ss;
	cin >> s;
	if (s==1)
		ss=1;
	else
		ss=2;
	for (int i=2;i<=s/i;++i) {
		if (!(s%i)) {
			if (i == s/i)
				ss++;
			else
				ss+=2;
		}
	}
	cout << ss;
	return 0;
}
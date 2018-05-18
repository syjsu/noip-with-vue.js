#include <iostream>

using namespace std;

int main ()
{
	long n,m,a,w,h;
	cin >> n >> m >> a;
	w = n/a;
	h = m/a;
	cout << w*h;
	return 0;
}
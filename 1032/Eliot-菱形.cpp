#include <iostream>
using namespace std;
int N;
void print(int i, int j, int n) {
	for (int k = 1;k < i;++k) cout << " ";
	for (int k = 1;k <= j;++k) cout << k;
	cout << endl;
	if (n != (2 * N - 1)) 
		if (n >= N) print(i+1,j-2,n+1);
		else print(i-1,j+2,n+1);
}
int main() {
	cin >> N;
	print(N, 1, 1);
	return 0;
}
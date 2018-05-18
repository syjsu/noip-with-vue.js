#include <iostream>
#include <string.h>
using namespace std;
int N, A, B;
int Ki[1024];
bool book[1024];
int min_ = 0x7ffffff;

void dfs(int step,int floor) {
	if (book[floor])
		return;
	if (floor == B) {
		if (step < min_)
			min_ = step;
		return;
	}
	if (floor - Ki[floor] > 0) {
		book[floor] = true;
		dfs(step + 1, floor - Ki[floor]);
		book[floor] = false;
	}
	if (floor + Ki[floor] <= N)
	{
		book[floor] = true;
		dfs(step + 1, floor + Ki[floor]);
		book[floor] = false;
	}
}
int main() {
	memset(book, false, sizeof(book));
	int count = 0;
	cin >> N >> A >> B;
	Ki[0] = -1;
	for (int i = 1; i <= N; i++) {
		cin >> Ki[i];
		if (Ki[i] == 0)
			count++;
	}
	if (count == N) {
		cout << -1;
		return 0;
	}
	if (A == B) {
		cout << 0;
		return 0;
	}
	dfs(0,A);
	if (min_ == 0x7ffffff) {
		cout << -1;
		return 0;
	}
	cout << min_;
	return 0;
}
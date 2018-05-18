#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,m;
	cin >> n >> m;
	long long k[n],s[n];
	for (long long i = 0; i < n; i++) {
		cin >> k[i] >> s[i];
		if (i != 0) {
			for (long long q=0; q<i; q++) {
				if(s[i]>s[q]) {
					swap(s[i],s[q]);
					swap(k[i],k[q]);
				}
			}
		}
	}

	long long newm = floor(m*1.5);
	while (s[newm-1] == s[newm]) {
		newm++;
	}
	cout << s[newm-1] << ' ' << newm <<endl;

	for (long long i = 0; i < newm; i++) {
		for (long long q=0; q<i; q++) {
			if(s[i]>s[q]) {
				swap(s[i],s[q]);
				swap(k[i],k[q]);
				}
				else if (s[i] == s[q]){
					if (k[i] < k[q])swap(k[i],k[q]);
				}
			}
		}
	for (long long i = 0; i < newm; i++) {
		cout << k[i] << ' ' << s[i] << endl;
	}
	return 0;

}

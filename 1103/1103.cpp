#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	char key; cin >> key;
	vector<string> ss;
	for (int i = 0; i != n; ++i) {
		string s; cin >> s; 
		ss.push_back(s);
	}
	int q; cin >> q;
	for (int i = 0; i != q; ++i) {
		int L, R; cin >> L >> R; --L;
		int qkind; cin >> qkind;
		switch (qkind) {
			case 0: {
				auto lam = [] (const string& s1, const string& s2) {return s1.size() < s2.size();};
				auto it = max_element(ss.begin() + L, ss.begin() + R, lam);
				cout << *it << endl;
				break;
			}
			case 1: {
				auto it = max_element(ss.begin() + L, ss.begin() + R);
				cout << *it << endl;
				break;
			}
			case 2: {
				auto lam = [key] (const string& s1, const string& s2) {
					return count(s1.begin(), s1.end(), key) < count(s2.begin(), s2.end(), key);
				};
				auto it = max_element(ss.begin() + L, ss.begin() + R, lam);
				cout << *it << endl;
				break;
			}
		}
	}
	return 0;
}

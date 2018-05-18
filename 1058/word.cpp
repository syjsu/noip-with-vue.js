#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main ()
{
	stack<string> ss;
	string s = "sdf",sub; 
	while (cin >> s) {
		if (s.find('.',0) == string::npos) {
			if (ss.empty())
				ss.push(s);
			else {
				if (s.length() < ss.top().length()) {
					ss.pop();
					ss.push(s);
				}
			}	
		}else{
			sub = s.substr(0,s.find_first_of('.'));
			if (ss.empty())
				ss.push(sub);
			else {
				if (sub.length() < ss.top().length()) {
					ss.pop();
					ss.push(sub);
				}
			}
			break;
		}
	}
	cout << ss.top();
	return 0;
}
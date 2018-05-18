#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,h=31,j=30;
	cin >> a;
	if (a%100 == 0 and a%400 == 0){
		cin >> b;
		if (b == 1 or b == 3 or b == 5 or b == 7 or b == 8 or b == 10 or b == 12)cout << h;
		else if (b == 2)cout << 29;
		else cout << j;
	}
	else if (a%4 == 0 and a%100 != 0){
		cin >> b;
		if (b == 1 or b == 3 or b == 5 or b == 7 or b == 8 or b == 10 or b == 12)cout << h;
		else if (b == 2)cout << 29;
		else cout << j;
	}
	else{
		cin >> b;
		if (b == 1 or b == 3 or b == 5 or b == 7 or b == 8 or b == 10 or b == 12)cout << h;
		else if (b == 2)cout << 28;
		else cout << j; 
	}
	return 0; 
}

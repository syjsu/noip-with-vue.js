#include <iostream>

int leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int norm[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	using namespace std;
	int year, month;
	cin >> year >> month;
	if (year % 4 == 0 && year % 100 != 0)
		cout << leap[month-1];
	else {
		if (year % 400 == 0)
			cout << leap[month-1];
		else 
			cout << norm[month-1];
	}
	return 0;
}

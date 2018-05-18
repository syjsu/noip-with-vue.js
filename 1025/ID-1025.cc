#include <iostream>

int main() {
	using namespace std;
	int n;
	cin >> n;
	int prize[n][3];
	for (int i=0; i<n; i++)
		for (int j=0; j<3; j++)
			cin >> prize[i][j];
	int au=0, ag=0, cu=0, sum=0;
	for (int i=0; i<n; i++)
		au += prize[i][0];
	for (int i=0; i<n; i++)
		ag += prize[i][1];
	for (int i=0; i<n; i++)
		cu += prize[i][2];
	sum = au + ag + cu;
	cout << au << " " << ag << " " << cu << " " << sum;
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	int N;
	float h;
	string sexual;
	vector<float> v1,v2;
	cin >> N;
	for (int i=0;i<N;++i) {
		cin >> sexual >> h;
		if (sexual == "male") 
			v1.push_back(h);
		else
			v2.push_back(h);
	}
	stable_sort(v1.begin(),v1.end());
	stable_sort(v2.begin(),v2.end(),greater<float>());
	for (auto x:v1)
		cout << fixed << setprecision(2) << x << " ";
	for (auto x:v2)
		cout << x << " ";
	return 0;
}
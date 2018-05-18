#include	<iostream> 
#include	<vector>
#include	<algorithm>

using namespace std;
int cnt[10000];

int main()
{
	int n; vector<int> vec;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
		cnt[i] = a;
	}
	
	sort(vec.begin(), vec.end());
	auto fuck = unique(vec.begin(), vec.end());
	vec.resize(distance(vec.begin(), fuck));
	
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < vec.size(); j++)
		{
			if(cnt[i] == vec[j])
			{
				cout << j + 1 << " ";
				break;
			}
		}
	}
	cout << endl;
}

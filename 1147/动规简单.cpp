#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int MAXN = 5005;
string S,T;
int F[MAXN][MAXN];
int main()
{
	cin >> S;
	cin >> T;
	int ls = S.length(),lt = T.length();
	for(int i = 1;i <= ls;i ++)
		for(int j = 1;j <= lt;j ++)
	{
		F[i][j] = max(F[i - 1][j],F[i][j - 1]);
		if (S[i - 1] == T[j - 1])
			F[i][j] = max(F[i][j],F[i - 1][j - 1] + 1);
	}
	cout << F[ls][lt] << endl;
	return 0;
}

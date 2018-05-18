#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int cgood[4][18] = {0};
	for (int i = 1; i <= n; i++) 
	{
		cin >> cgood[1][i] >> cgood[2][i] >> cgood[3][i];
		cgood[0][i] = cgood[1][i]+cgood[2][i]+cgood[3][i];
	}
	for (int i = 1; i <= n; i++)
	{
		cgood[1][0] += cgood[1][i];
		cgood[2][0] += cgood[2][i];
		cgood[3][0] += cgood[3][i];
		cgood[0][0] += cgood[0][i];
	}
	printf("%d %d %d %d", cgood[1][0], cgood[2][0], cgood[3][0], cgood[0][0]);
	return 0; 
}

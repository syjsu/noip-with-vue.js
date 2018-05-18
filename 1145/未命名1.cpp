#include	<bits/stdc++.h>

using namespace std;

int a[1000][1000];
int f[1000][1000];

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	for(int j = 0; j <= i; j++)
	{
		cin >> a[i][j];
		f[i][j] = a[i][j];
	}
		
	for(int i = 1; i < n; i++)
	for(int j = 0; j <= i; j++)
	{
		if(j == i) f[i][j] += f[i - 1][j - 1];
		else if(j == 0) f[i][j] += f[i - 1][j];
		else f[i][j] += f[i - 1][j] > f[i - 1][j - 1] ? f[i - 1][j] : f[i - 1][j - 1];
	}
	
	int fm = 0;
	for(int i = 0; i < n; i++)
	{
		if(fm < f[n - 1][i]) fm = f[n - 1][i];
	}
	
	cout << fm << endl;
}

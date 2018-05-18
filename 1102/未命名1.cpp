#include	<bits/stdc++.h>

using namespace std;

int a[500][500];
int *p[500];

int main()
{
	int n, m, q;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++)
	{
		cin >> a[i][j];
		p[i] = a[i];
	}
	
	cin >> q;
	for(int i = 0; i < q; i++)
	{
		string op; int x,  y;
		cin >> op >> x >> y;
		if(op == "C")
		{
			int *t;
			t = p[x - 1];
			p[x - 1] = p[y - 1];
			p[y - 1] = t;
		}
		else if(op == "Q")
		{
			cout << p[x - 1][y - 1] << endl;
		}
	}
	
	return 0;
}

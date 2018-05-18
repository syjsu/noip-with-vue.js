#include <stdio.h>
#include <vector>
using namespace std;
int re; char ge;
int read()
{
	while((re = getchar()) < 48);
	re -= 48;
	while((ge = getchar()) >= 48)	re = (re << 3) + (re << 1) + ge - 48;
	return re;
}
vector<int> a[100001];
int i, x, y, n, m; 
int main()
{
	n = read();
	m = read();
	for(i = 0; i < m; i++)
	{
		x = read();
		y = read();
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(i = 1; i <= n; i++)
	{
		for(vector<int>::iterator j = a[i].begin(); j != a[i].end(); j++)
			printf("%d ", *j);
		putchar('\n');
	}
	return 0;
}


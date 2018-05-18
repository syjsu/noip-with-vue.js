#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	int c;
	cin >> a >> b;
	c = int(a/b);
	b = a-(c * b); 
	printf("%.2lf\n", b); 

}
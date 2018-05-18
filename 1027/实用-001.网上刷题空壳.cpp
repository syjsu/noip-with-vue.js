#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std; 

int sum,x;

int main()
{
	scanf("%d", &x);
	for (;;)
	{
		sum += x%10;
		if (x < 10) break;
		else x /= 10;
	}
	cout << sum;
	return 0; 
}

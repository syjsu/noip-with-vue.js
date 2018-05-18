#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int data[102];
	double sum={0.0};

	cin>>n;
	for(int i=0;i<n; i++)
	{
		cin>>data[i];
		sum += data[i];
	}

	printf("%.2lf", sum/n);

	return 0;
}

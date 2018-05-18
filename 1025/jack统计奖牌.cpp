#include <bits/stdc++.h>
using namespace std;

int main()
{
	float data[10];
	double sum = 0.0;
	int i;

	for(i=0; i<10; i++)
	{
		cin>>data[i];
	}
	
	sort(data, data+10);
	
	for(i=1; i<9; i++)
	{
		sum += data[i];
	}
	
	printf("%.3lf", sum/8);

	return 0;
}

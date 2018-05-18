#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num, n{};
	int i{0};
	int data[5];

	cin>>num;
	while(num)
	{
		n++;
		data[i++] = num % 10;
		num /= 10;
	}
	cout<<n<<endl;

	for(i=0; i<n; i++)
	{
		cout<<data[n-i-1]<<endl;
	}
	return 0;
}

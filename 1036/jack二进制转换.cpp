#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n)
	{
		cout<<"shang:"<<n/2<<" yu:"<<n%2<<endl;
		n /= 2;
	}
	return 0;
}

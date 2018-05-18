#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	long long n,ans=0;
	cin>>n;
	while(n){
		ans+=n%10;
		n/=10;
	}
	cout<<ans;
	system("pause");
	return 0;
}

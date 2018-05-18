#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
	int n,y;
	cin>>n;
	while(n>0)
	{
		y=n%2;
		n/=2;
	    cout<<"shang:"<<n<<" yu:"<<y<<"\n";
	}
	return 0;
}

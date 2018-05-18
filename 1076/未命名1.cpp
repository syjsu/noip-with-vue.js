#include <cstdio>
#include <iostream>
using namespace std;
void trans(int n,int m)
{
	if(n)
	{
		trans(n/m,m);
		if(n%m<10)
			printf("%c",n%m+'0');
		else
			printf("%c",n%m-10+'A');
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	trans(n,m);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b[1001];cin>>a;
	b[1]=1;b[2]=2;
	for(int c=3;c<=a;c++)b[c]=b[c-2]+b[c-1];
	cout<<b[a];
	return 0;
}

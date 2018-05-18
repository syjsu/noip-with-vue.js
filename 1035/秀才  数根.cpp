#include<bits/stdc++.h>
using namespace  std;
int sg(int n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
int main()
{
	int n,s;
	cin>>n;
	s=sg(n);
	while(s>10)
	  s=sg(s);
	cout<<s<<endl;
   return 0;
}


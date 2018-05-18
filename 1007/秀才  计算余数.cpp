#include<bits/stdc++.h>
using namespace std;
int main()
{
   	float a,b,c;
   	cin>>a>>b;
	c=ceil(a/b)-1;
	cout<<fixed<<setprecision(2)<<a-b*c<<endl;
}


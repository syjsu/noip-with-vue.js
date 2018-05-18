#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int a,b,c,i;
	cin>>a>>b;
	a=a%10;
	c=a;
	for(i=1;i<b;i++)
	{
		a*=c;
		if(a>9)
		  a=a%10;
	}
	cout<<a<<endl;
   return 0;
}


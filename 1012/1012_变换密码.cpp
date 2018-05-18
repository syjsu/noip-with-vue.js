#include<iostream> 
using namespace std;
int main()
{
	int a,b;
	string c;
	cin>>a;
	b=a%123;
	if((97<=b)&(122>=b))
	{
		c=b;
	cout<<c;
	}
	else
	{
		b=a%91;
	    if((65<=b)&(90>=b))
	    {
	    	c=b;
	    	cout<<c;
		}
		else
		cout<<"*";
	}
	    
return 0;
} 

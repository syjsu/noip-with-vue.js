#include<iostream>
#include<cmath> 
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c,d,n,L;
    cin>>L;
	if(L>999)
	{  n=4;
	   a=L/1000;
	   b=(L/100)%10;
	   c=(L/10)%10;
	   d=L%10;
	   cout<<n<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"; 
	}
	else
	{
		if(L/100>0)
		{
		   n=3;
		   a=L/100;
		   b=(L/10)%10;
		   c=L%10;
		   cout<<n<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n"; 
	    }
	    else
		{
		   if(L/10>0)
		   {
		   n=2;
		   a=L/10;
		   b=L%10;
		   cout<<n<<"\n"<<a<<"\n"<<b<<"\n";
	       }
	       else
	       {
	       n=1;
		   a=L%10;
		   cout<<n<<"\n"<<a<<"\n";
	       }
		}
	} 
	return 0;
}





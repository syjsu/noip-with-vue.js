#include<iostream>
using namespace std;

int main()
{
	int a,a1,a2,a3,a4,n;
	cin>>a;
	a1=a/1000;
	a2=a%1000;
	a2=a2/100;
	a3=a%100;
	a3=a3/10;
	a4=a%10;
	if (a1!=0)
	{
	    n=4;cout<<n<<endl<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl;
	}
	else if (a2!=0) 
	{
	    n=3;cout<<n<<endl<<a2<<endl<<a3<<endl<<a4<<endl;
	}
	else if (a3!=0)
	{
	    n=2;cout<<n<<endl<<a3<<endl<<a4<<endl;
	}
	else 
	{
	    n=1;cout<<n<<endl<<a4<<endl;
	}
	return 0;
}

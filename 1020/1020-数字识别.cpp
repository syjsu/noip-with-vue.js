#include<iostream>
using namespace std;
int main()
{
	int x,x1,x2,x3,x4;
	cin>>x;
	x1=x/1000;
	x2=x/100%10;
	x3=x/10%10;
	x4=x%10;
	if(x1)
	cout<<4<<endl<<x1<<endl<<x2<<endl<<x3<<endl<<x4;
	else if(x2)
	cout<<3<<endl<<x2<<endl<<x3<<endl<<x4;
	else if(x3)
	cout<<2<<endl<<x3<<endl<<x4;
	else
	cout<<1<<endl<<x4;
	return 0;
}

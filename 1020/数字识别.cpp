#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int d=x/1000;
	int a=x%1000/100;
	int b=x%1000%100/10;
	int c=x%1000%100%10;
	if(d!=0)
	{
	cout<<"4"<<endl;
	cout<<d<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;	
	}
	else
	{
		if(a!=0)
		{
			cout<<"3"<<endl;
			cout<<a<<endl;
				cout<<b<<endl;
	            cout<<c<<endl;	
		}
		else
		{
			if(b!=0)
			{
				cout<<"2"<<endl;
				cout<<b<<endl;
	            cout<<c<<endl;
			}
			else
			{
				cout<<"1"<<endl;
				cout<<c<<endl;
			}
		}
		
	}
	return 0;
 } 

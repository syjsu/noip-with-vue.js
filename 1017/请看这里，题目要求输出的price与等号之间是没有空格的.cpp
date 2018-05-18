#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double price[4] = {3, 2.5, 4.1, 10.2};
	cout<<"[1] apples\n";
	cout<<"[2] pears\n";
	cout<<"[3] oranges\n";
	cout<<"[4] grapes\n";
	cout<<"[0] Exit\n";
	
	int a;
	cin>>a;
	int b = 0;
	switch(a)
	{
		case 1:printf("price=%.1f", price[0]);break;
		case 2:printf("price=%.1f", price[1]);break;
		case 3:printf("price=%.1f", price[2]);break;
		case 4:printf("price=%.1f", price[3]);break;
		case 0:break;
		default:cout<<"price="<<b;
	}
	
	return 0; 
}

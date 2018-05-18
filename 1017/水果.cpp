#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"[1]apples"<<endl;
	cout<<"[2]pears"<<endl;
	cout<<"[3]oranges"<<endl;
	cout<<"[4]grapes"<<endl;
	cout<<"[0]Exit"<<endl;
	switch(n)
	{
		case 1:cout<<"price=3.0"<<endl;
		return 0;
		case 2:cout<<"price=2.5"<<endl;
		return 0;
		case 3:cout<<"price=4.1"<<endl;
		return 0;
		case 4:cout<<"price=10.2"<<endl;
		return 0;
	}
	if(n>4)
	cout<<"0";
	return 0;
 } 

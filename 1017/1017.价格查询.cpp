#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<"[1] apples"<<endl;
	cout<<"[2] pears"<<endl;
	cout<<"[3] oranges"<<endl;
	cout<<"[4] grapes"<<endl;
	cout<<"[0] Exit"<<endl;
	if (a==0) cout<<"Exit";
	if (a==1) cout<<"price=3.0";
	if (a==2) cout<<"price=2.5";
	if (a==3) cout<<"price=4.1";
	if (a==4) cout<<"price=10.2";
	if (a!=0&&a!=1&&a!=2&&a!=3&&a!=4) cout<<"price=0";
	return 0;
}

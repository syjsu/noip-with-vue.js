#include<cstdio>
#include<iostream>
#include<cmath>
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
    cout<<"price=";
    if(a==1) cout<<"3";
    else if(a==2) cout<<"2.5";
    else if(a==3) cout<<"4.1";
    else if(a==4) cout<<"10.2";
	return 0;
}

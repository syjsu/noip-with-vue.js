#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"[1] apples"<<endl;
	cout<<"[2] pears"<<endl;
	cout<<"[3] oranges"<<endl;
	cout<<"[4] grapes"<<endl;
	cout<<"[0] Exit"<<endl;
	int s;
	cin>>s;
switch(s)
{
	case 1:
	 cout<<"price=3.0";
	 break;
 case 2:
	 cout<<"price=2.5";
	 break;
 case 3:
	  cout<<"price=4.1";
	  break;
 case 4:
	  cout<<"price=10.2";
	  break;
 case 0:
	   return 0;
 default:
	   cout<<"price=0";
}
	  return 0; 
}

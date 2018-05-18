#include<iostream>
#include<cstdio> 
using namespace std;
int main(){
	cout<<"[1] apples"<<endl;
	cout<<"[2] pears"<<endl;
	cout<<"[3] oranges"<<endl;
	cout<<"[4] grapes"<<endl;
	cout<<"[0] Exit"<<endl;
   int a;
   cin>>a;
   if(a==1){printf("price=3.0");}
   else if(a==2){printf("price=2.5");}
   else if(a==3){printf("price=4.1");}
   else if(a==4){printf("price=10.2");}
   else if(a==0){return 0;}
   else{printf("price=0");}





	return 0;
} 
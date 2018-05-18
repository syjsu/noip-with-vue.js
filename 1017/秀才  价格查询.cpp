#include<bits/stdc++.h>
using namespace  std;
int main()
{
   cout<<"[1] apples"<<endl;
   cout<<"[2] pears"<<endl;
   cout<<"[3] oranges"<<endl;
   cout<<"[4] grapes"<<endl;
   cout<<"[0] Exit"<<endl;
   int a;
   cin>>a;
   if(a==0)  return 0;
   if(a==1) {cout<<"price=3.0"<<endl;;return 0;} 
   if(a==2) {cout<<"price=2.5"<<endl;;return 0;} 
   if(a==3) {cout<<"price=4.1"<<endl;;return 0;} 
   if(a==4) {cout<<"price=10.2"<<endl;;return 0;} 
   if(a!=1&&a!=2&&a!=3&&a!=4&&a!=0) {cout<<"price=0"<<endl;return 0;}
   return 0;
}


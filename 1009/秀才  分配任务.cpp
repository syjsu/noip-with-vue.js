#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int a,b;
   cin>>a>>b;
   if(a+b<10)  {cout<<"water"<<endl;return 0;}
   else  if(a+b>=10&&a>b) {cout<<"tree"<<endl;return 0;}
         else  if(a+b>=10&&a<=b)  {cout<<"tea"<<endl;return 0;}
   return 0;
}


#include<bits/stdc++.h>
using namespace  std;
int main()
{
   int a,b,c,max;
   cin>>a>>b>>c;
   if(a+b<=c||a+c<=b||b+c<=a)
   {
      cout<<"NO"<<endl;
	  return 0;
   }
   if(a==b&&b==c)
   {
	  cout<<"Equilateral"<<endl;
	  return 0;
   }
   max=a;
   if(b>max)  max=b;
   if(c>max)  max=c;
   if(max==a&&b*b+c*c==a*a)  cout<<"Right"<<endl;
      else if(max==b&&a*a+c*c==b*b)  cout<<"Right"<<endl;
           else if(max==c&&a*a+b*b==c*c)   cout<<"Right"<<endl;
                else  cout<<"General"<<endl;
   return 0;
}


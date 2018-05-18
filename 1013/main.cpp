#include <cstdlib>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{int a,b,c;
cin>>a>>b>>c;
if (a+b>c&&a+c>b&&b+c>a){
       if (a==b||a==c||b==c||(a==b)&&(a==c))          cout<<"Equilateral";
else   if (a*a+b*b==c*c||b*b+c*c==a*a)                cout<<"Right";
else                                                  cout<<"General";}
else cout<<"NO";

    
    return 0;
}

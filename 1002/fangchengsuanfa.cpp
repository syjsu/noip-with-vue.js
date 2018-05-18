#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
  double a,b,c,h,x,s;
  cin>>a>>b>>c;
  x=(a*a-b*b+c*c)/(2*c);
  h=sqrt(a*a-x*x);
  s=c*h/2;
  printf("%.4lf",s);
  return 0;
}

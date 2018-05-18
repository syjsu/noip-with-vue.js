#include<iostream>
using namespace std;
int main()
{
  long N;
  int a,b,c,d,e,f,g,h,i,j;
  cin>>N;
  a=N/1000000000;
  b=N/100000000%10;
  c=N/10000000%10;
  d=N/1000000%10;
  e=N/100000%10;
  f=N/10000%10;
  g=N/1000%10;
  h=N/100%10;
  i=N/10%10;
  j=N%10;
  cout<<a+b+c+d+e+f+g+h+i+j;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a) 
	  if(a==b&&b==c&&c==a) cout<<"Equilateral"<<endl;
	   else if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(c,2)+pow(b,2)==pow(a,2))
	     cout<<"Right"<<endl;
	  else cout<<"General"<<endl;
	else cout<<"NO"<<endl;
 } 

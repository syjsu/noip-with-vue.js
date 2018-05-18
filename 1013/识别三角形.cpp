#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)<c)
	cout<<"NO";
	else if((a+c)<b)
		 cout<<"NO";
		 else if((b+c)<a)
		      cout<<"NO";
		      else if(a==b,b==c)
		           cout<<"Equilateral";
		           else if((a*a+b*b)==c*c)
		                cout<<"Right";
		                else if(a*a==(b*b+c*c))
		                     cout<<"Right";
		                     else if((a*a+c*c)==b*b)
		                          cout<<"Right";
		                          else cout<<"General";
	return 0;
}
		

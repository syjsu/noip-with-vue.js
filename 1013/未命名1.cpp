#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a-b<c)
	{
		if(a==b&&b==c) cout<<"Equilateral"<<endl;
        else if(c>b&&a<b&&a*a+b*b==c*c) cout<<"Right"<<endl;
        else cout<<"General";
	}
	else
	cout<<"NO";
	return 0;
}

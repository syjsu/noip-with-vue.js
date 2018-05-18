#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c=0,d=0,e,f,g;
	cin>>a;
	for (int i=1;i<=a;++i)
	{
		cin>>e>>f>>g;
		b+=e;
		c+=f;
		d+=g;
	}
	cout<<b<<" "<<c<<" "<<d<<" "<<b+c+d<<endl;
	return 0;
}

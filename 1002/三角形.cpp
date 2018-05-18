#include<iostream>
#include<cmath>
#include<iomanip> 
using namespace std;
int main()
{
	float a,b,c,p,s;
	cin>>a>>b>>c;
	if ((a+b)>c&&(a+c)>b&&(b+c)>a)
	{
	 p=(a+b+c)/2;
	 s=sqrt(p*(p-a)*(p-b)*(p-c));
	 cout<<fixed<<setprecision(4)<<s<<endl;
    }
    else cout<<"请保证输入的三边长度能够成三角形"<<endl;
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n,m,a,s;
    cin>>n>>m>>a;
    if((n>1000000000)||(m>1000000000)||(n<1)||(m<1))
    {
	   cout<<"³ö´í£¡\n";
	}
	else
	{
		s=(n/a)*(m/a);
	    cout<<s<<endl;
	}
	return 0;
}

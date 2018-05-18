#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
    cin>>x;
    if((x<100)||(x>999))
    {
	   cout<<"³ö´í£¡\n";
	}
	else
	{
	    x=x*1000+x;
	    y=x/7/11/13;
	    cout<<y<<endl;
	}
	return 0;
}
